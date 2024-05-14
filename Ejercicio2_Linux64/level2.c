#include <stdio.h>
#include <string.h>

void escape() {
  printf("######################################################################################\n");
  printf("NIVEL 2 SUPERADO!!!\n");
  printf("######################################################################################\n");
}

void overflow(){
  char buff[32]; 
  printf("Inserta tu payload:");
  gets(buff);
  printf("Buffer content: %s\n", buff);

}


int main() {
  printf("Puede que con escape() haya una forma de salir...\n \n");
  overflow();
  return 0;
}

