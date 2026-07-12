#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};


class Stack {

private:
    Node* top;


public:

    Stack() {
        top = nullptr;
    }


    void push(int value) {

        Node* node = new Node(value);

        node->next = top;

        top = node;
    }


    void pop() {

        if(top == nullptr)
            return;

        Node* temp = top;

        top = top->next;

        delete temp;
    }


    void display() {

        Node* current = top;

        while(current) {

            cout << current->data << " ";

            current = current->next;
        }
    }
};


int main() {

    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.display();

    return 0;
}0000
