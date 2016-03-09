#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>
#include "calculadora.h"

using namespace std;

int main()
{
  
  
  //CAL<int> calc;
  CAL<float> calc;
  int opc;
  string expresion;
  
do{
  system("clear");
  cout<<"**********************************************"<<endl;
  cout<<"***********Notación polaca inversa***********"<<endl;
  cout<<"* 1. Introducir expresión                   *"<<endl;;
  cout<<"***********************************************"<<endl;
  cout<<"*******************0. Salir:*******************"<<endl;
  cout<<">>> Introduzca una opción: ";
  cin>>opc;



  switch(opc)
  {

    case 1:

    cout<<"Introduzca la expresion que desea calcular: "<<endl;
    cin.ignore();
    getline (cin,expresion);
    cout<<"La expresion introducida es: "<<expresion<<endl;
    calc.calculadora(expresion);
    getchar();getchar();
    break;
    
    default:
    cout<<"Opcion no valida"<<endl;
    break;
  }
} 
while (opc != 0);


  return 0;
}