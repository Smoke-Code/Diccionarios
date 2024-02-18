#include <stdio.h>

void saludar(){
  printf("hola\n");
}

void despedirse(){
  printf("Hasta pronto\n");
}

int main(){
  void(*ptrfunctionSaludar)() = saludar;
  ptrfunctionSaludar();
  void(*ptrfuncionDespedir)() = despedirse;
  ptrfuncionDespedir();

  return 0;

  // function = () => {}
}
