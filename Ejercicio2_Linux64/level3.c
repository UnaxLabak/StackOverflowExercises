#include <stdio.h>
#include <string.h>

char *llave = "desactivada";

void escape() {
  if(strcmp(llave,"activada") == 0){
        printf("######################################################################################\n");
        printf("NIVEL 3 SUPERADO!!!\n");
        printf("######################################################################################\n");
  }else{
        printf("llave no activada");
  }

}

void activarKey(){
  llave = "activada";
}

void overflow(){
        char buff[24]; 
        printf("Inserta tu payload:");
        gets(buff);
        printf("Buffer content: %s\n", buff);
}


int main() {
  printf("Puede que con escape() haya una forma de salir...\n \n");
  overflow();


  return 0;
}

