//adaptado de https://www.programiz.com/dsa/graph
#pragma once
const int INFINITO = 9999;
const int MAX = 10;

struct nodo {
    int vertice;
    nodo* seguinte;
};

struct Grafo {
    int numVertices;
    int* visitado;
    nodo** listaAdj;
};

nodo* criaVertice(int v);
Grafo* criaGrafo(int vertices);
void criaAresta(Grafo* grafo, int origem, int destino);
void imprimeGrafo(Grafo* grafo);

void dfs(Grafo* grafo, int vertice);
void bfs(Grafo* grafo, int verticeInicial);

void Dijkstra(int Grafo[MAX][MAX], int n, int inicio);