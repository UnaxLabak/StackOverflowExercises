#include <stdio.h>
#include <string.h>

fvuln(char *temp1, char *temp2){
    char buffer[512];
    strcpy(buffer, temp2);
    printf("Hola %s %s\n", temp1, buffer);

}

int main(int argc, char *argv[]){
    if(argc < 3)
        exit (0);
    fvuln (argv[1], argv[2]);
    printf("Hasta luego %s %s\n", argv[1], argv[2]);
    return 0;
}