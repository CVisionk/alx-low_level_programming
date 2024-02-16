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
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", elf_header.e_ident[i]);
    }
    printf("\n  Class:                             %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d%s\n", elf_header.e_ident[EI_VERSION], elf_header.e_ident[EI_VERSION] == EV_CURRENT ?"  (current)" : ""   );
    printf("  OS/ABI:                            ");

	switch (elf_header.e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_header.e_ident[EI_OSABI]);
	}
    printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
    if (elf_header.e_ident[EI_DATA] == ELFDATA2MSB)
		elf_header.e_type >>= 8;

	printf("  Type:                              ");

	switch (elf_header.e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_header.e_type);
	}
    printf("  Entry point address:               ");



	if (elf_header.e_ident[EI_DATA] == ELFDATA2MSB)
	{
		elf_header.e_entry = ((elf_header.e_entry << 8) & 0xFF00FF00) |
			  ((elf_header.e_entry >> 8) & 0xFF00FF);
		elf_header.e_entry = (elf_header.e_entry << 16) | (elf_header.e_entry >> 16);
	}

	if (elf_header.e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)elf_header.e_entry);

	else
		printf("%#lx\n", elf_header.e_entry);

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