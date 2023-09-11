//
// Created by medivh on 9/11/23.
//

#ifndef STACK_LINKED_LIST_NODE_H
#define STACK_LINKED_LIST_NODE_H

#include <cstdlib>
#include <iostream>

using namespace std;


class Node {
public:
    int data;
    Node *next;

    void destroy(Node **top) {
        Node *temp = *top;
        while (temp != nullptr) {
            *top = (*top)->next;
            free(temp);
            temp = *top;
        }
        cout << "A pilha foi destruída" << endl;
    }

    Node *createNode(int data) {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr;
        return newNode;
    }

    int size(Node *top) {
        int size = 0;
        Node *temp = top;
        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }
        return size;
    }

    int empty(Node *top) {
        return top == nullptr;
    };

    void push(Node **top, int other_data) {
        Node *newNode = createNode(other_data);
        newNode->next = *top;
        *top = newNode;
        cout << "Push: " << other_data << endl;
    }

    int pop(Node **top) {
        if (empty(*top)) {
            cout << "A pilha está vazia" << endl;
            exit(EXIT_FAILURE);
        }

        Node *temp = *top;
        *top = (*top)->next;
        int pop_out = temp->data;
        free(temp);

        return pop_out;
    }

    int top(Node *top) {
        if (empty(top)) {
            cout << "A pilha está vazia" << endl;
            exit(EXIT_FAILURE);
        }

        return top->data;
    }

};


#endif //STACK_LINKED_LIST_NODE_H
