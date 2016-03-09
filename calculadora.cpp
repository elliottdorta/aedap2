#include "pila.h"
#include "calculadora.h"
#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>
#include <string>

using namespace std;

template <class TipoDato>
CAL<TipoDato>::CAL()
{
}



template<class TipoDato>
TipoDato CAL<TipoDato>::calculadora(TipoDato expresion)
{
    PILA<TipoDato> stack;
    
    for(int i=0; i<expresion.length();i++)
    {   
  
       TipoDato aux, a,b;
          switch (expresion[i])
            {
                case '+':
                stack.addPila(stack.returnValue()+stack.returnValue());
                
                break;
                
                case '-':
                b = stack.returnValue();
                a = stack.returnValue();
                aux = a-b;
                stack.addPila(aux);
               
                break;
                
                case '*':
                stack.addPila(stack.returnValue()*stack.returnValue());
               
                break;
                
                case '/':
                b = stack.returnValue();
                a = stack.returnValue();
                aux = a/b;
                stack.addPila(aux);
                break;
                
                case ' ':
                break;
                
                
                default:
                int number = expresion[i]-48;
                stack.addPila(number);
                
                break;
            
        
            }
           
    }
    cout<<"El valor es "<<stack.returnValue();
}

template <class TipoDato>
CAL<TipoDato>::~CAL()
{
    
}