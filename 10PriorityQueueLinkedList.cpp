#include <iostream>
using namespace std;


struct Node {

    int data;
    int priority;

    Node* next;


    Node(int value,int p){

        data=value;
        priority=p;
        next=nullptr;
    }
};



class PriorityQueue {


private:

    Node* front;


public:

    PriorityQueue(){

        front=nullptr;
    }



    void insert(int value,int priority){

        Node* node=new Node(value,priority);



        if(front==nullptr ||
           priority < front->priority){

            node->next=front;

            front=node;
        }


        else{

            Node* temp=front;


            while(temp->next &&
            temp->next->priority <= priority)

                temp=temp->next;



            node->next=temp->next;

            temp->next=node;
        }
    }



    void display(){

        Node* temp=front;


        while(temp){

            cout<<temp->data
                <<" priority "
                <<temp->priority
                <<endl;


            temp=temp->next;
        }
    }
};


int main(){

    PriorityQueue pq;


    pq.insert( " ",1);

}
