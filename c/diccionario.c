//MODIFICACIONES DE TIPOS 
//
// signed 
// unsigned 
// long 
// short

// MODIFICACIONES DE ACCESOj 
// const
//

//VARIABLES EXTERNAS 
//extern --variable-- --valor-- 

//VARIABLES ESTATICAS

//static --variable-- --valor-- 

// OPERADORES DE PUNTEROS & Y * 
// m = &cont -> coloca en m la direccion de memoria de la variable cont 
// q = *m -> coloca el valor de cont en q 

//SIZEOF
// devuelve la longitud del tipo de dato 
//
// printf("%f", sizeof f); --> mostrando 4
// printf("%d", sizeof (int)); --> mostrando 2

//EXIT 

/*#include <stdio.h>
main(void){
  if(!tarjeta_color()) exit(1);
  jugar();
}*/

// CONTINUE
/*do 
 * scanf("%d", &num);
 * if(x<0) continue; 
 * printf("%d\n",x);
 * }while (x!=100);*/

//FUNCIONES 
//tipo nombre_funcion (lista de parametros){
//
//}



// #include <inttypes.h>
// int main(){
//   int numero = 10; // entero 
//   short num = 13; // entero corto 
//   char v = "n";  //caracter - un solo byte 
//   long l = 12234; // entero largo
//   float nume = 10.4; // numero de 6 digitos con comas
//   double numer = 10.45; //punto flotante de doble precision
//   
// }
//
//
// int operaciones(){
//   int n1,n2;
//   int suma, resta, mul, div, mod;
//   suma = n1 + n2;
//   resta =  n1 - n2;
//   mul = n1 * n2;
//   div = n1 / n2;
//   mod = n1 % n2;
// }
//
// int suma(int a, int b){
//   return a + b;
// } 

// CICLOS 
//while ( valor <= valor1 ){
// i = 2 * i;
//}

// IMPRIMIENDO ARGUMENTOS

//printf("%d\t%d\n");
// %d indicando los valores que tenemos guardados
// \t ---> tabulacion
// \n ---> salto de linea 


//CONSTANTES
// define nombre texto de reemplazo

// ESTRUCTURA DE LA UN PROGRAMA 
// Cabecera 

// #include <stdio.h>
// //Definiciones
// typedef int mi_tipo;
// //Funciones
// mi_tipo funcion(int a, int b);
// //programa principal
// int main(){
//   //,,programa
// }
//
// // creando archivos externos 
//
// #include <stdio.h>
// #include <stdlib.h>
//
// int main(){
//   int status;
//   int nuevo; 
//   nuevo = system("mkdir salchicha");
//   status = system("ls");
//   
//   if((nuevo != 0) && (status != 0)){
//     printf("El comando a falado\n");
//     
//   }
//   
//   return 0;
// }
//

//FILE *fp;
//fp = open("archivo.txt", "r");

// fopen() --> abre un archivo
// fclose() --> cierra un archivo
// fread() --> lee los datos de un archivo
// fwrite() --> escribe los datos de un archivo
// fseek() --> Mueve el puntero de archivo a una posicion especifica 
// ftell() --> devuelve la posicion actual del puntero de archivo 
// ferror() --> devuelve un valor distinto de cero si se ha producido un error al leer 
//

// #include <stdio.h>
//
// int main(){
//   FILE *fp;
//   char buffer[1024];
//
//   fp = fopen("archivo.txt", "r");
//   if(fp == NULL){
//     printf("no se puede abrir el archivo. \n");
//     return 1;
//     
//   }
//   while (fgets(buffer, sizeof(buffer), fp) != NULL){
//     printf("%s", buffer);
//     
//   }
//
//   fclose(fp);
//   return 0;
// }
//
//
// // USANDO EL CONTROL TERNARIO 
//
// #include <stdio.h>
//
// int main(){
//   int x=30;
//   int z;
//   
//   z = (x < 10)? 100: 200;
//   
//   printf("%d\n", z); 
//   return 0;
//
// }
//
//
// // VALORES MULTIPLES EN FOR 
//  
// #include <stdio.h>
//
// int main(){
//   int m1,m2;
//   for (m1=0,m2=0; m1 <= 12 && m2 <= 12; m1++, m2++){
//     printf("%d * %d = %d\n", m1,m2,m1*m2);
//     
//   }
//   return 0;
// }
//
// // CALCULAOORA CON FOR 
// #include <stdio.h>
//
// int main() {
//   int m1, m2;
//
//   for(m1=0;m1<=12;m1++){
//       for(m2=0;m2<=12;m2++){
//           printf("%d * %d = %d\n", m1,m2,m1*m2);
//       }
//       printf("\n\n");
//   }
//   return 0;
// }
//
// // USANDO GETCHAR Y PUTCHAR
// #include <stdio.h>
// int main(void){
//   char ch;
//   do{
//     ch = getchar();
//     putchar(ch);
//     
//   }while (ch != 'e' && ch != 'E');
//   return 0;
// }
//
// USANDO GETS Y PUTS 
// #include <stdio.h>
//
// #define TAM 100
//
// int main(void){
//   char cadena[TAM];
//   puts("Introduce una cadena : ");
//   //gets(cadena); // la funcion gets es insegura y esta en desuso
//   // AL HACERLO CON FGETS no hay desbordamiento de buffer cadena 
//   fgets(cadena, TAM,stdin); // variable, tamano maxumo, stdin para indicar que se lea la entrada estandar y no mas de TAM 
//   puts(cadena);
//   return 0;
// }

//VALORES ESPECIFICOS DE LECTURA 

//%c -> Leer un único carácter.
//%s -> leer una cadena.
//%d -> Leer un entero decimal.
//%i -> Leer un entero decimal.
//%e -> Leer un número en punto flotante.
//%f -> Leer un número en punto flotante.
//%g -> Leer un número en punto flotante.
//%o -> Leer un número octal.
//%s -> Leer una cadena de caracteres.
//%x -> Leer un número hexadecimal.
//%p -> Leer un puntero.
//%n -> Recibe un valor igual al número de carácter leídos.
//%u -> Leer un entero sin signo


// CADENAS APUNTADAS

//%e -> Punto flotante en notación científica (e minúscula).
//%E -> Punto flotante en notación científica (E mayúscula).
//%g -> Usar el más corto de %e y %f.
//%G -> Usar el más corto de %E y %f.
//%o -> Octal sin signo.
//%s -> Cadena de caracteres.
//%u -> Enteros decimales sin signo.
//%x -> Hexadecimales sin signo (letras minúsculas).
//%X -> Hexadecimales sin signo (letras mayúsculas).
//%p -> Mostrar un puntero.
//%n -> El argumento asociado es un puntero a un entero, el cual recibirá el número de caracteres escritos.
//%% -> Imprimir el signo %.

// PARA DOUBLE  
// 
// %lf:  imprime/lee en double
// %lF: equivalente a un %lf
// %Ie : double en notacion cientifica
// %IE : igual solo con mayusculas 
// %Ig : double en  %lf o %Ie 
// %IE : igual solo %lF o %IE

//USANDO PRINTF Y scanf

// #include <stdio.h>
//
// int main(void){
//   int a,b;
//   printf("\nIntroduce el valor de a : ");
//   scanf("%d", &a);
//   printf("\nIntroduce el valor de b :");
//   scanf("%d", &b);
//
//   if(b != 0){
//     printf("\nEl valor de %d dividido %d es : %f\n", a,b,(float)a/b);
//   }
//   else {
//     printf("\nError, b vale 0\n");
//     
//   }
//   return 0;
// }

// MODODS DE UN ARCHIVO O FILE 
  
//r -> Abrir un archivo para lectura.
//w -> Crear un archivo para escritura.
//a -> Abrir un archivo para añadir.
//rb -> Abrir un archivo binario para lectura.
//wb -> Crear un archivo binario para escritura.
//ab -> Abrir un archivo binario para añadir.
//rt -> Abrir un archivo de texto para lectura.
//wt -> Crear un archivo de texto para escritura.
//at -> Abrir un archivo de texto para añadir.
//r+ -> Abrir una archivo para lectura/escritura.
//w+ -> Crear un archivo para lectura/escritura.
//a+ -> Abrir un archivo para leer/añadir.
//r+b -> Abrir un archivo binario para lectura/escritura.
//w+b -> Crear un archivo binario para lectura/escritura.
//a+b -> Abrir un archivo binario para leer/añadir.
//r+t -> Abrir un archivo de texto para lectura/escritura.
//w+t -> Crear un archivo de texto para lectura/escritura.
//a+t -> Abrir un archivo de texto para leer/añadir.

// USANDO COMANDOS 

// #define #undef #error #include 

// DIRECTIVAS

// #if #elif #else #endif
// #define #ifdef #else #endif
// #ifndef #endif  // sirve para comprobar 
// #line 
// #pragma // seleccionador de instrucciones 
// 


// USANDO LA LIBRERIA CTYPE.H 
// isalpha(variable); = (A-Z O a-z) 
// isalnum(variable); = (A-Z o a-z 0 0-9)
// iscntrl(variable); = control de caracteres
// isdigit(variable); = (0-9);
// isgraph(variable); = representacion grafica
// islower(variable); = debe de ser minusculas
// isupper(variable); = debe de ser mayusculas
// ispunct(variable); = signos de puntuacion
// isspace(variable); = espacio en blanco 
// isxdigit(variable); = digitos hexadecimales
// 

//  USANDO LA CONVERSION
//  tolower(variable); = a minusculas
//  toupper(variable); = a mayuculas
// 

