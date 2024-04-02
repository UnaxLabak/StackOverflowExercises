#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    char *ptr;
    if (argc < 3) {
        printf("Usage: %s <environment var>\n", argv[0]);
        return 1;
    }
    ptr = getenv(argv[1]);
    ptr += (strlen(argv[0]) - strlen(argv[2]))*2;
    
    printf("%s esta %p\n, argv[1], ptr");
    return 0;
}