#include <stdio.h>
#include <string.h>

int main() {
  char buff[20]; 

//Constantes visisbles en assembly.
//Si queremos dar una clave se vera en assembly si es un string.

  printf("Bienvenido al login mas seguro del mundo!!\n \n");
  printf("Insertar contraseña: ");
  scanf("%s", buff);

  
  if(strlen(buff) > sizeof(buff)){
    printf("######################################################################################\n");
    printf("NIVEL 1 SUPERADO!!!\n");
    printf("######################################################################################\n");
  } else {
    printf("Contraseña incorrecta.\n");
  }

  return 0;
}

