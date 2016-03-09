#include "Nodo.h"
#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>

using namespace std;


template <class TipoDatoNodo>
NODO<TipoDatoNodo>::NODO()
{
    next = NULL;
    valor = 0;
}


template <class TipoDatoNodo>
TipoDatoNodo NODO<TipoDatoNodo>::getValor()
{

    return valor;
}

template <class TipoDatoNodo>
NODO<TipoDatoNodo>* NODO<TipoDatoNodo>::getNext()
{
    return next;
}

template <class TipoDatoNodo>
TipoDatoNodo NODO<TipoDatoNodo>::setValor(TipoDatoNodo value)
{
    valor = value;
}

template <class TipoDatoNodo>
TipoDatoNodo NODO<TipoDatoNodo>::setNext(NODO<TipoDatoNodo> *node)
{
    next = node;
}

template <class TipoDatoNodo>
NODO<TipoDatoNodo>::~NODO()
{
    
}