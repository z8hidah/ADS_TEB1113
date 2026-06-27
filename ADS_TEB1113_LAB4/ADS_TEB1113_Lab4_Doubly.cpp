#include <iostream>

using namespace std;
struct Node {
    string name;
    Node* next = NULL;
    Node* prev = NULL;

};

int main() {
    Node* node1 = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();
    Node* node4 = new Node();

    node1 -> name = "Sion";
    node1 -> next = node2;
    node1 -> prev = NULL;

    node2 -> name = "Yushi";
    node2 -> next = node3;
    node2 -> prev = node1;

    node3 -> name = "Riku";
    node3 -> next = node4;
    node3 -> prev = node2;

    node4 -> name = "Jaehee";
    node4 -> next = NULL;
    node4 -> prev = node3;

    //FORWARD DIRECTION
    Node* display_node = node1;
    while (display_node != NULL){
        cout << display_node -> name << endl;
        display_node = display_node ->next;
    };

    cout<<endl;

    //Backward DIRECTION
    Node* back_node = node4;
    while (back_node != NULL){
        cout << back_node -> name << endl;
        back_node = back_node ->prev;
    };

};