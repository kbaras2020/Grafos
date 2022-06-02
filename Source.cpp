//adaptado de https://www.programiz.com/dsa/graph

#include <iostream>
#include "Grafo.h"
using namespace std;

int main() {
    /*Grafo* grafo = criaGrafo(5);
	criaAresta(grafo, 0, 3);
	criaAresta(grafo, 0, 2);
	criaAresta(grafo, 0, 1);
	criaAresta(grafo, 1, 2);
	criaAresta(grafo, 1, 4);
	criaAresta(grafo, 2, 4);
	criaAresta(grafo, 3, 4);
	imprimeGrafo(grafo);
	cout << endl;*/
	Grafo* grafo = criaGrafo(10);
	criaAresta(grafo, 0, 1);
	criaAresta(grafo, 0, 2);
	criaAresta(grafo, 1, 2);
	criaAresta(grafo, 2, 3);
	criaAresta(grafo, 2, 6);
	criaAresta(grafo, 2, 8);
	criaAresta(grafo, 4, 5);
	criaAresta(grafo, 4, 6);
	criaAresta(grafo, 5, 6);
	criaAresta(grafo, 6, 7);
	criaAresta(grafo, 6, 8);
	criaAresta(grafo, 7, 8);
	criaAresta(grafo, 8, 9);
	imprimeGrafo(grafo);
	cout << endl;

	//dfs(grafo, 0);
	bfs(grafo, 0);

	/*int Grafo[MAX][MAX];
	
	Grafo[0][0] = 0;
	Grafo[0][1] = 2;
	Grafo[0][2] = 5;
	Grafo[0][3] = 0;
	Grafo[0][4] = 0;
	Grafo[0][5] = 0;
	Grafo[0][6] = 0;

	Grafo[1][0] = 2;
	Grafo[1][1] = 0;
	Grafo[1][2] = 1;
	Grafo[1][3] = 4;
	Grafo[1][4] = 7;
	Grafo[1][5] = 4;
	Grafo[1][6] = 0;

	Grafo[2][0] = 5;
	Grafo[2][1] = 1;
	Grafo[2][2] = 0;
	Grafo[2][3] = 0;
	Grafo[2][4] = 0;
	Grafo[2][5] = 6;
	Grafo[2][6] = 0;

	Grafo[3][0] = 0;
	Grafo[3][1] = 4;
	Grafo[3][2] = 0;
	Grafo[3][3] = 0;
	Grafo[3][4] = 5;
	Grafo[3][5] = 0;
	Grafo[3][6] = 0;

	Grafo[4][0] = 0;
	Grafo[4][1] = 7;
	Grafo[4][2] = 0;
	Grafo[4][3] = 5;
	Grafo[4][4] = 0;
	Grafo[4][5] = 0;
	Grafo[4][6] = 3;

	Grafo[5][0] = 0;
	Grafo[5][1] = 4;
	Grafo[5][2] = 6;
	Grafo[5][3] = 0;
	Grafo[5][4] = 0;
	Grafo[5][5] = 0;
	Grafo[5][6] = 2;

	Grafo[6][0] = 0;
	Grafo[6][1] = 0;
	Grafo[6][2] = 0;
	Grafo[6][3] = 0;
	Grafo[6][4] = 3;
	Grafo[6][5] = 2;
	Grafo[6][6] = 0;
		
	int numeroVertices = 7, inicio = 0;

	Dijkstra(Grafo, numeroVertices, inicio);*/
	cin.ignore();
	cin.get();
	return 0;
}