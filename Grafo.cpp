#include "Grafo.h"
#include "Fila.h"
#include <iostream>

using namespace std;

// Create a node
nodo* criaVertice(int v) {
    nodo* novo = new nodo;
    novo->vertice = v;
    novo->seguinte = NULL;
    return novo;
}

// Create a graph
Grafo* criaGrafo(int vertices) {
    struct Grafo* grafo = new Grafo;
    grafo->numVertices = vertices;
    grafo->listaAdj = new nodo*[vertices];
    grafo->visitado = new int[vertices];
    int i;
    for (i = 0; i < vertices; i++) {
        grafo->listaAdj[i] = NULL;
        grafo->visitado[i] = 0;
    }
    return grafo;
}

// Add edge
void criaAresta(Grafo* grafo, int origem, int destino) {
    // Add edge from source to dest
    nodo* novo = criaVertice(destino);
    novo->seguinte = grafo->listaAdj[origem];
    grafo->listaAdj[origem] = novo;

    // Add edge from dest to source
    novo = criaVertice(origem);
    novo->seguinte = grafo->listaAdj[destino];
    grafo->listaAdj[destino] = novo;
}

// Print the graph
void imprimeGrafo(Grafo* grafo) {
    int v;
    for (v = 0; v < grafo->numVertices; v++) {
        nodo* temp = grafo->listaAdj[v];
        cout << "\n Vertice " << v << ": ";
        while (temp) {
            cout << temp->vertice << " -> ";
            temp = temp->seguinte;
        }
        cout << "NULL" << endl;
    }
}

// DFS algo
void dfs(Grafo* grafo, int vertice) {
    nodo* temp = grafo->listaAdj[vertice];;

    grafo->visitado[vertice] = 1;
    cout << "Visitado " << vertice << "\n";

    while (temp != NULL) {
        int verticeConectado = temp->vertice;

        if (grafo->visitado[verticeConectado] == 0) {
            dfs(grafo, verticeConectado);
        }
        temp = temp->seguinte;
    }
}

// BFS algorithm
void bfs(Grafo* grafo, int verticeInicial) {
    fila* q = novaFila();

    grafo->visitado[verticeInicial] = 1;
    entra(q, verticeInicial);

    while (!vazia(q)) {
        imprime(q);
        int verticeAtual = sai(q);
        cout << "Visited " << verticeAtual << endl;

        nodo* temp = grafo->listaAdj[verticeAtual];

        while (temp) {
            int adjVertex = temp->vertice;

            if (grafo->visitado[adjVertex] == 0) {
                grafo->visitado[adjVertex] = 1;
                entra(q, adjVertex);
            }
            temp = temp->seguinte;
        }
    }
}



void Dijkstra(int Graph[MAX][MAX], int n, int start) {
    int cost[MAX][MAX], distance[MAX], pred[MAX];
    int visited[MAX], count, mindistance, nextnode;

    // Creating cost matrix
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (Graph[i][j] == 0)
                cost[i][j] = INFINITO;
            else
                cost[i][j] = Graph[i][j];

    for (int i = 0; i < n; i++) {
        distance[i] = cost[start][i];
        pred[i] = start;
        visited[i] = 0;
    }

    distance[start] = 0;
    visited[start] = 1;
    count = 1;

    while (count < n - 1) {
        mindistance = INFINITO;

        for (int i = 0; i < n; i++)
            if (distance[i] < mindistance && !visited[i]) {
                mindistance = distance[i];
                nextnode = i;
            }

        visited[nextnode] = 1;
        for (int i = 0; i < n; i++)
            if (!visited[i])
                if (mindistance + cost[nextnode][i] < distance[i]) {
                    distance[i] = mindistance + cost[nextnode][i];
                    pred[i] = nextnode;
                }
        count++;
    }

    // Printing the distance
    for (int i = 0; i < n; i++)
        if (i != start) {
            cout << "\nDistance from source to " << i << ": " << distance[i];
        }
    // Printing the predecessor
    for (int i = 0; i < n; i++)
        cout << "Predecessor of " << i << ": " << pred[i] << endl;
        
}