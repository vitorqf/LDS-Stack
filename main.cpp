#include <iostream>
#include "node.h"

using namespace std;

int main() {
    Node *top = nullptr;

    cout << "Tamanho da pilha: " << top->size(top) << endl;
    cout << "A pilha está vazia? " << top->empty(top) << endl;

    top->push(&top, 1);
    top->push(&top, 2);
    top->push(&top, 3);
    top->push(&top, 4);
    top->push(&top, 5);

    cout << "Tamanho da pilha: " << top->size(top) << endl;
    cout << "A pilha está vazia? " << top->empty(top) << endl;

    cout << "Topo da pilha: " << top->top(top) << endl;

    cout << "Pop: " << top->pop(&top) << endl;
    cout << "Pop: " << top->pop(&top) << endl;
    cout << "Pop: " << top->pop(&top) << endl;
    cout << "Pop: " << top->pop(&top) << endl;
    cout << "Pop: " << top->pop(&top) << endl;

    cout << "Tamanho da pilha: " << top->size(top) << endl;
    cout << "A pilha está vazia? " << top->empty(top) << endl;

    top->push(&top, 3);
    top->push(&top, 4);
    top->push(&top, 5);\

    cout << "Tamanho da pilha: " << top->size(top) << endl;
    cout << "A pilha está vazia? " << top->empty(top) << endl;

    top->destroy(&top);

    cout << "A pilha está vazia? " << top->empty(top) << endl;



    return 0;
}
