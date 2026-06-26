#include <iostream>
#include <string>

using namespace std;

/*
jaehee
sion 
yushi 
riku
*/

class Stack{
    public:
        string name;
        Stack* next;
};

//Display stack
void display (Stack* top){
    while(top != NULL){
        cout<<top->name<<endl;
        top=top->next;
    }
}

    //push (to add new item)
    void push (Stack*& top, string name){

        Stack* newNode = new Stack();

        newNode->name = name;
        newNode->next = top;
        top = newNode;
    }


    //pop (remove top item)
    void pop (Stack*& top){
        if(top==NULL){
            cout<<"Stack is empty\n";
            return;
        }

        
        cout<<"Removed: "<<top->name<<endl;
        Stack* temp = top;
        top=top->next; //move to down
        delete temp; //delete old top

    }

    //peek
    void peek(Stack* top){
        if (top==NULL){
            cout<<"Stack is empty\n";

        }
        else{
            cout<<"Top item: "<<top->name<<endl;
        }
    }


int main() {

    Stack* node1 = new Stack();
    Stack* node2 = new Stack();
    Stack* node3 = new Stack();
    Stack* node4 = new Stack();

    node1->name="Riku";
    node1->next= node2;

    node2->name="Yushi";
    node2->next= node3;

    node3->name="Sion";
    node3->next= node3;

    node4->name="Jaehee";
    node4->next= NULL;

    Stack* top=node1;

    cout<<"Original Stack:\n";
    display(top);

    //push
    cout<<"\nAfter Push (Sakuya):\n";
    push(top, "Sakuya");
    display(top);
    
    //peek
    cout<<"\nPeek:\n";
    peek(top);
    

    //POP
    cout<<"\nAfter Pop: \n";
    pop(top);
    display(top);
    
    return 0;
}