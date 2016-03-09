#include "pila.h"
#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>

using namespace std;

template <class TipoDatoPila>
PILA<TipoDatoPila>::PILA()
{
    size = 0;
    head = NULL;
}
template <class TipoDatoPila>
void PILA<TipoDatoPila>::addPila(TipoDatoPila value)
{
    NODO<TipoDatoPila> *node = new NODO<TipoDatoPila>();
    node->setValor(value); 
    size ++;
    
    if(head == NULL) {
        
        head = node;
    }
    else
    {
     node->setNext(head);
     head = node;
    }
}

template <class TipoDatoPila>
void PILA<TipoDatoPila>::removePila()
{

    head = head->getNext();
    size--;
}
template <class TipoDatoPila>
TipoDatoPila PILA<TipoDatoPila>::returnValue()
{
    TipoDatoPila valor = head->getValor();
    removePila();
    return valor;
}

template <class TipoDatoPila>
void PILA<TipoDatoPila>::showPila()
{
    NODO<TipoDatoPila> *temp = head;
    while (temp != NULL)
    {
        cout<<temp->getValor()<<endl;
        temp = temp->getNext();
    }
}

template <class TipoDatoPila>
bool PILA<TipoDatoPila>::checkNull()
{
    if(head==NULL)
        return true;
    else
        return false;
}

template <class TipoDatoPila>
int PILA<TipoDatoPila>::sizePila()
{
    return size;
}
template <class TipoDatoPila>
PILA<TipoDatoPila>::~PILA()
{
    
}
