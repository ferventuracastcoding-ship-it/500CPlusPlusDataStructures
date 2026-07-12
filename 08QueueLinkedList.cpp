#include <iostream>
using namespace std;


struct Node {

    int data;
    Node* next;


    Node(int value){

        data=value;
        next=nullptr;
    }
};



class Queue {

private:

    Node* front;
    Node* rear;


public:

    Queue(){

        front=nullptr;
        rear=nullptr;
    }


    void enqueue(int value){

        Node* node=new Node(value);


        if(rear==nullptr){

            front=rear=node;
        }

        else{

            rear->next=node;
            rear=node;
        }
    }



    void dequeue(){

        if(front==nullptr)
            return;


        Node* temp=front;

        front=front->next;

        delete temp;
    }



    void display(){

        Node* current=front;

        while(current){

            cout<<current->data<<" ";

            current=current->next;
        }
    }
};


int main(){

    Queue q;

    q.enqueue(100);
    q.enqueue(200);
    q.enqueue(300);

    q.display();

}
