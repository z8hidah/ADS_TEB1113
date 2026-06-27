#include <iostream>
#include <string>

using namespace std;

/*
jaehee
sion
yushi
riku
sakuya*/

class Node{
    public:
    string name;
    Node* next = NULL;

};

class Queue{
    public :

    Node* front = NULL;
    Node* rear = NULL;

    //enqueue(add)
    void enqueue(string name){
        Node* newNode = new Node();
        newNode->name = name;

        if(rear == NULL){
            front =rear=newNode;

        }
        else{
            rear->next=newNode;
            rear=newNode;
        }
    }

    //dequeue (remove)
    void dequeue(){
        if(front == NULL){
            cout<<"Queue is empty"<<endl;
        }
        else{
            Node* temp=front;
            cout<<"Removed: "<<front->name<<endl;

            front=front->next;

            if(front==NULL){
                rear=NULL;
            }

            delete temp;
        }
    }

    //peek
    void peek(){
        if(front==NULL){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"Front: "<<front->name<<endl;
        }
    }

    void display(){

        Node* current = front;

        while(current!=NULL){

            cout<<current->name<<endl;
            current = current->next;
        }
    }

};

int main(){
    Queue* queue = new Queue();

    queue->enqueue("Sakuya");
    queue->enqueue("Sion");
    queue->enqueue("Yushi");
    queue->enqueue("Riku");

    cout<<"Queue List: "<<endl;
    queue->display();

    cout<<endl;
    queue->peek();

    cout<<endl;
    queue->dequeue();

    cout<<endl;
    
    cout<<"After dequeue: "<<endl;
    queue->display();

    return 0;


}
