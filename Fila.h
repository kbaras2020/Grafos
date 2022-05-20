#pragma once
#include <iostream>
using namespace std;

const int SIZE = 40;

struct fila {
	int * items;
	int inicio;
	int fim;
};

fila* novaFila();
void entra(fila* q, int);
int sai(fila* q);
bool vazia(fila* q);
void imprime(fila* q);