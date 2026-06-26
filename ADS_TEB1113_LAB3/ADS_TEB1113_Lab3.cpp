#include <iostream>
using namespace std;
    
struct Node{
    string name;
    Node* next = NULL;
};

int main()
{
    Node nodes[4];
    
    Node* node1 = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();
    Node* node4 = new Node();
    
    node1->name = "Sion";
    node1->next = node2;
    
    node2->name = "Sakuya";
    node2->next = node3;
    
    node3->name = "Yushi";
    node3->next = node4;
    
    node4->name="Riku";
    
    cout<<node1->name<<endl;
    cout<<node2->name<<endl;
    cout<<node3->name<<endl;
    cout<<node4->name<<endl;
    
    return 0;
}