#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED
#pragma once
#include <iostream>


using namespace std;

typedef int TDATO;

class NODO{

private:
    TDATO valor;
    NODO *next;

public:
    
    NODO();
    ~NODO();
    TDATO getValor();
    NODO* getNext();
    void setValor(TDATO value);
    void setNext(NODO *node);
      
};
#endif 