#pragma once
#include "Nodo.h"
#include <iostream>
#include <string>

using namespace std;

typedef int TDATO;


class PILA {

private:
 
 int size;
 NODO *head;

public:
 
 PILA();
 ~PILA();
 void addPila(TDATO value);
 void showPila();
 int sizePila();
 void removePila();
 bool checkNull();
 TDATO returnValue();
 
};