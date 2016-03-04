#include "Nodo.h"
#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>

using namespace std;


NODO::NODO()
{
    next = NULL;
    valor = 0;
}


TDATO NODO::getValor()
{

    return valor;
}

NODO* NODO::getNext()
{
    return next;
}


void NODO::setValor(TDATO value)
{
    valor = value;
}


void NODO::setNext(NODO *node)
{
    next = node;
}


NODO::~NODO()
{
    
}