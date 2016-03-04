#include "pila.h"
#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>

using namespace std;



PILA::PILA()
{
    size = 0;
    head = NULL;
}

void PILA::addPila(TDATO value)
{
    NODO *node = new NODO();
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

void PILA::removePila()
{

    head = head->getNext();
    size--;
}

TDATO PILA::returnValue()
{
    TDATO valor = head->getValor();
    removePila();
    return valor;
}


void PILA::showPila()
{
    NODO *temp = head;
    while (temp != NULL)
    {
        cout<<temp->getValor()<<endl;
        temp = temp->getNext();
    }
}


bool PILA::checkNull()
{
    if(head==NULL)
        return true;
    else
        return false;
}


int PILA::sizePila()
{
    return size;
}

PILA::~PILA()
{
    
}