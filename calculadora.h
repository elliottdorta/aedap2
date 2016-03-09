#ifndef CALCULADORA_H_
#define CALCULADORA_H_
#include "pila.h"
#include <iostream>
#include <string>

using namespace std;



template<class TipoDato>
class CAL {


private:
 
 

public:
 
 CAL();
 ~CAL();
 TipoDato calculadora(string expresion);
 
};
#endif



template <class TipoDato>
CAL<TipoDato>::CAL()
{
}



template<class TipoDato>
TipoDato CAL<TipoDato>::calculadora(string  expresion)
{
    PILA<TipoDato> stack;
    bool flag = false;
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