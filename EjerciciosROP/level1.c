#include <stdio.h>
#include <stdlib.h>

int gadget() {
    asm("jmp %esp");
}

int main() {
    char buffer[32];
    gets(buffer);
}



