#include "pila.h"
#include "calculadora.h"
#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>
#include <string>

using namespace std;



CAL::CAL()
{
}

TDATO CAL::calculadora(string expresion)
{
    PILA stack;
    
    for(int i=0; i<expresion.length();i++)
    {   
  
       int aux, a,b;
          switch (expresion[i])
            {
                case '+':
                stack.addPila(stack.returnValue()+stack.returnValue());
                 stack.showPila();
                break;
                
                case '-':
                b = stack.returnValue();
                a = stack.returnValue();
                aux = a-b;
                stack.addPila(aux);
                stack.showPila();
                break;
                
                case '*':
                stack.addPila(stack.returnValue()*stack.returnValue());
                 stack.showPila();
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

CAL::~CAL()
{
    
}