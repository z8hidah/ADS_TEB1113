#include <iostream>
#include <string>

using namespace std;

/*
jaehee
sion
yushi
riku
sakuya 
ryo*/

class Stack{
    public:

    string name[5];
    int top= -1;

    void push(string name){

        if(top==4){
            cout<<"Stack is full"<<endl;

        }
        else{
            top++;
            this->name[top]=name;
        }
    }

    //pop
    void pop(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Removed: "<<name[top]<<endl;
            top--;
        }
    }

    void peek(){
        if (top==-1){
            cout<<"Stack is empty"<<endl;

        }
        else{
            cout<<"Top: "<<name[top]<<endl;
        }
    }

    void display(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;

        }
        else{
            for (int i = top; i>= 0; i--){
                cout<<name[i]<<endl;
            }
        }
    }

};

int main(){

    Stack* stack = new Stack();

    stack->push("Sakuya");
    stack->push("Riku");
    stack->push("Yushi");
    stack->push("Sion");

    cout<<"Stack list: "<<endl;

    stack->display();

    cout<<endl;
    stack->peek();
    cout<<endl;
    stack->pop();
    cout<<endl;
    cout<<"After pop: "<<endl;
    stack->display();

    return 0;


}