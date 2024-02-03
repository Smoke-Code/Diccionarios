#include <cmath>
#include <iostream>
#include "lecturaDatos.h"


using namespace std;


int main(){
  int obj = 0;
  std::cout << "Menu de Opciones" << std::endl;
  std::cout << "1: Registrar" << std::endl;
  std::cout << "2: Reportar " << std::endl;
  std::cout << "3: Salir" << std::endl;
  std::cout << "Elige la opcion : " << std::endl;
  std::cin >> obj;

  do {
    if (obj == 1){
      lectura();
    }

    else if (obj == 2){

    }
    else if (obj == 3){

    }
    else {
      std::cout << "la opcion ingresada es incorrecta " << std::endl;
    }

    cout << "Menu de Opciones" << endl;
    cout << "1: Registrar" << endl;
    cout << "2: Reportar " << endl;
    cout << "3: Salir" << endl;
    cout << "Elige la opcion : " << endl;
    cin >> obj;

  } while(obj >=1 && obj <=3);

}
