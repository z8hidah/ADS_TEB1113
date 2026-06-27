#include <iostream>

using namespace std;

struct Node {
    string name;
    Node* next = NULL;
};

int main() {

    Node* node1 = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();
    Node* node4 = new Node();

    node1 -> name = "Sion";
    node1 -> next = node2;

    node2 -> name = "Yushi";
    node2 -> next = node3;

    node3 -> name = "Riku";
    node3 -> next = node4;

    node4 -> name = "Jaehee";
    node4 -> next = node1; //last node points back to first node


    //DISPLAY CIRCULAR LINKED LIST
    Node* display_node = node1;

    do {
        cout << display_node -> name << endl;
        display_node = display_node -> next;

    } while(display_node != node1);


}