#include <stdio.h>
#include <string.h>

unsigned int lock1;
unsigned int lock2;

void gadjet1(){
  asm("pop %rax;"
      "ret");
}

void gadjet2(){
  asm("pop %rcx;"
      "ret");
}

void gadjet3(){
  asm("mov %rax, (%rcx)"
      "ret");
}


void escape() {
  if (lock1 == 1089169457267428344 && lock2 == 1073538260354985479) {
    printf("######################################################################################\n");
    printf("NIVEL 2 SUPERADO!!!\n");
    printf("######################################################################################\n");
  } else {
    printf("Buen intento, pero lock1 y/o lock2 son incorrectos!\n");
  }
  
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

