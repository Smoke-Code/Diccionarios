#include <cmath>
#include <iostream>

using namespace std;

int main(){
  double n1,n2;
  double s,r,m,d;
  std::cout << "Suma de dos numeros: " << std::endl; 
  std::cout << "Digite el primer numero : " << std::endl;
  std::cin >> n1;
  std::cout << "Digite el segundo numero : " << std::endl;
  std::cin >> n2;
  s = n1 + n2;
  r = n1 - n2;
  m = n1 * n2;
  d = n1 / n2;
  std::cout << "La suma de los dos numeros es " <<s<<std::endl;
  std::cout << "La resta de los dos numeros es " <<r<< std::endl;
  std::cout << "La multiplicacion de los dos numeros es " <<m<< std::endl;
  std::cout << "La division de los numeros es " <<d<< std::endl;
  return 0;
}
