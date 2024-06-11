#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find_largest_char(char *username, int length);
int sum_ascii_values(char *username, int length);
int multiply_ascii_values(char *username, int length);
int generate_random_char(char *username);

int main(int argc, char **argv) {
    char keygen[7];
    int length, ch;
    long alph[] = {
        0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
        0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
        0x723161513346655a, 0x6b756f494b646850
    };

    (void)argc;

    for (length = 0; argv[1][length]; length++);

    keygen[0] = ((char *)alph)[(length ^ 59) & 63];
    keygen[1] = ((char *)alph)[(sum_ascii_values(argv[1], length) ^ 79) & 63];
    keygen[2] = ((char *)alph)[(multiply_ascii_values(argv[1], length) ^ 85) & 63];
    keygen[3] = ((char *)alph)[find_largest_char(argv[1], length)];
    keygen[4] = ((char *)alph)[sum_ascii_values(argv[1], length)];
    keygen[5] = ((char *)alph)[generate_random_char(argv[1])];
    keygen[6] = '\0';

    for (ch = 0; keygen[ch]; ch++)
        printf("%c", keygen[ch]);

    return 0;
}

int find_largest_char(char *username, int length) {
    int ch, largest_char = *username;

    for (ch = 0; ch < length; ch++) {
        if (largest_char < username[ch])
            largest_char = username[ch];
    }

    srand(largest_char ^ 14);
    return (rand() & 63);
}

int sum_ascii_values(char *username, int length) {
    int ch, sum = 0;

    for (ch = 0; ch < length; ch++)
        sum += username[ch];

    return ((unsigned int)sum ^ 239) & 63;
}

int multiply_ascii_values(char *username, int length) {
    int ch, product = 1;

    for (ch = 0; ch < length; ch++)
        product *= username[ch];

    return ((unsigned int)product ^ 229) & 63;
}

int generate_random_char(char *username) {
    int ch, random_char = 0;

    for (ch = 0; ch < *username; ch++)
        random_char = rand();

    return ((unsigned int)random_char ^ 229) & 63;
}
