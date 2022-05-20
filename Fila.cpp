#include "Fila.h"

// Create a queue
fila* novaFila() {
    fila* q = new fila;
    q->items = new int[SIZE];
    q->inicio = -1;
    q->fim = -1;
    return q;
}

// Check if the queue is empty
bool vazia(fila* q) {
    if (q->fim == -1)
        return true;
    else
        return false;
}

// Adding elements into queue
void entra(fila* q, int valor) {
    if (q->fim == SIZE - 1)
        cout << "\nFila cheia!!\n";
    else {
        if (q->inicio == -1)
            q->inicio = 0;
        q->fim++;
        q->items[q->fim] = valor;
    }
}

// Removing elements from queue
int sai(fila* q) {
    int item;
    if (vazia(q)) {
        cout << "Fila vazia!\n";
        item = -1;
    }
    else {
        item = q->items[q->inicio];
        q->inicio++;
        if (q->inicio > q->fim) {
            q->inicio = q->fim = -1;
        }
    }
    return item;
}

// Print the queue
void imprime(fila* q) {
    int i = q->inicio;

    if (vazia(q)) {
        cout << "Fila vazia\n";
    }
    else {
        for (i = q->inicio; i < q->fim + 1; i++) {
            cout << q->items[i] << " | ";
        }
        cout << endl;
    }
}
