#include <iostream>
using namespace std;


struct Node {

    int data;

    Node* next;
    Node* prev;


    Node(int value){

        data=value;
        next=nullptr;
        prev=nullptr;
    }
};



class Deque {

private:

    Node* front;
    Node* rear;


public:

    Deque(){

        front=nullptr;
        rear=nullptr;
    }



    void insertFront(int value){

        Node* node=new Node(value);


        node->next=front;


        if(front)
            front->prev=node;

        else
            rear=node;


        front=node;
    }



    void insertRear(int value){

        Node* node=new Node(value);


        node->prev=rear;


        if(rear)
            rear->next=node;

        else
            front=node;


        rear=node;
    }



    void display(){

        Node* temp=front;


        while(temp){

            cout<<temp->data<<" ";

            temp=temp->next;
        }
    }
};


int main(){

    Deque d;


    d.insertFront(10);
    d.insertRear(20);
    d.insertRear(30);


    d.display();

}
