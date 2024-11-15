#include <stdio.h>

int main () {
    unsigned int x = 1;
    char *c = (char*)&x;

    if (*c) {
        printf("System is Little Endian\n");
    } else {
        printf("System is Big Endian\n");
    }
return 1;
}

