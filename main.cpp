#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>
#include "Nodo.h"
#include "pila.h"
#include "calculadora.h"

using namespace std;

int main()
{



  PILA stack;
  CAL calc;

  int opc,value, val;
  string expresion;
do{
  system("clear");
  cout<<"**********************************************"<<endl;
  cout<<"***********Notación polaca inversa***********"<<endl;
  cout<<"* 1. Por determinar                        *"<<endl;
  cout<<"*******************Pila***********************"<<endl;
  cout<<"* 7. Push elementos a la pila                *"<<endl;
  cout<<"* 8. Mostrar elemetnos de la pila            *"<<endl;
  cout<<"* 9. Pop elementos de la pila                *"<<endl;
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
    cout<<"Edesta es la expresion "<<expresion<<endl;
    calc.calculadora(expresion);
    getchar();getchar();
    break;
    
    case 7:
    system("clear");
    cout<<"Introduzca el valor del elemento push: ";
    cin>>val;
    stack.addPila(val);
    cout<<"Elementos creados"<<endl;
    if(stack.checkNull()==false)
    cout<<"Elemento añadido de manera correcta";
    getchar();getchar();
    break;
    
    case 8:
    cout<<"El tamaño de la pila es: "<<stack.sizePila()<<endl;
    stack.showPila();
    getchar();getchar();
    break;
    
    case 9:
    if(stack.checkNull()==false)
    {cout<<"El pop ha sido efectuado";
    stack.removePila();}
    else
    cout<<"No hay elementos para efectuar pop";
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