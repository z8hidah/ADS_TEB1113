#include <iostream>
#include <string>

using namespace std;

/*
jaehee
sion
yushi
riku
sakuya*/

class Queue{
    public:
    string name[5];
    int front = 0;
    int rear = -1;

    //enqueue(add)
    void enqueue(string name){

        if(rear==4){
            cout<<"Queue is full"<<endl;
        }
        else{
            rear++;
            this->name[rear]=name;
        }
    }

    //dequeue (remove)
    void dequeue(){
        if(front > rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"Removed: "<<name[front]<<endl;

            front++;
        }
    }

    //peek
    void peek(){
        if(front>rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"Front: "<<name[front]<<endl;
        }
    }

    void display(){

        if (front> rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            for(int i=front; i<=rear; i++){
                cout<<name[i]<<endl;
            }
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