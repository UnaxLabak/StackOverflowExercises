#include <stdio.h>
#include <string.h>

void escape() {
  printf("######################################################################################\n");
  printf("NIVEL 3 SUPERADO!!!\n");
  printf("######################################################################################\n");
}

void overflow(char *arg){
  char buff[32]; 
  strcpy(buff, arg);
  printf("Buffer content: %s\n", buff);

  return 0;
}


int main(int argc, char *argv[]) {
  printf("Puede que con escape() haya una forma de salir...\n \n");
  if(argc != 2){
    printf("Uso: %s <payload>\n", argv[0]);
    return 1;
  }

  overflow(argv[1]);
  return 0;
}

