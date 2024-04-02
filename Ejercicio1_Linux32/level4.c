#include <stdio.h>
#include <string.h>

void overflow(char *arg){
  char buff[40]; 
  strcpy(buff, arg);
  printf("Buffer content: %s\n", buff);

  return 0;
}


int main(int argc, char *argv[]) {
  printf("NIVEL BONUS!!! Podras ejecutar una shell de comandos??? \n \n");
  if(argc != 2){
    printf("Uso: %s <payload>\n", argv[0]);
    return 1;
  }

  overflow(argv[1]);
  return 0;
}



