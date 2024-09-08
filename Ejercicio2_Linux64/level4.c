#include <stdio.h>
#include <string.h>

void overflow(){
  char buff[40]; 
  gets(buff);
  printf("Buffer content: %s\n", buff);
}


int main(int argc, char *argv[]) {
  printf("NIVEL BONUS!!! Podras ejecutar una shell de comandos??? \n \n");
  overflow();
  return 0;
}

