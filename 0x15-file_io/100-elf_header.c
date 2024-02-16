#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void print_elf_header(const char *filename) {
    int fd;
    Elf64_Ehdr elf_header;

    // Open the ELF file
    if ((fd = open(filename, O_RDONLY)) < 0) {
        fprintf(stderr, "Error: Cannot open file '%s'\n", filename);
        exit(98);
    }

    // Read ELF header
    if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header)) {
        fprintf(stderr, "Error: Cannot read ELF header from file '%s'\n", filename);
        close(fd);
        exit(98);
    }

    // Check ELF magic number
    if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
        elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
        elf_header.e_ident[EI_MAG3] != ELFMAG3) {
        fprintf(stderr, "Error: '%s' is not an ELF file\n", filename);
        close(fd);
        exit(98);
    }

    // Print ELF header information
    printf("Magic: ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", elf_header.e_ident[i]);
    }
    printf("\nClass: %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("Data: %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
    printf("OS/ABI: %s\n", elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Unknown");
    printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
    printf("Type: %s\n", elf_header.e_type == ET_EXEC ? "Executable" : (elf_header.e_type == ET_DYN ? "Shared object" : "Other"));
    printf("Entry point address: %lx\n", (unsigned long)elf_header.e_entry);

    // Close the file
    close(fd);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    print_elf_header(argv[1]);

    return 0;
}