#include <iostream>
using namespace std;

class Node {
    public :
        int data;
        Node *next;
};

void display(Node *head){
    Node *node=head;
    while (node!=nullptr){
        cout<<node->data<<"\t";
        node = node->next;
    }
}

int main(){
    int head_val;
    // Allocating memory to new Node head
    Node *head = new Node();
    cout<<"Enter head value: ";
    cin>>head_val;
    head->data = head_val;
    int n,val;
    Node *ptr = head;
    cout<<"Enter number of nodes: ";
    cin>>n;
    for (int i=0;i<n;i++){
        // Creating a new Node 
        Node *new_node = new Node();
        cout<<"Enter value in node : ";
        cin>>val;
        new_node->data = val;
        new_node->next = NULL;
        // Appending new node to the head node 
        ptr->next = new_node;
        // Increament to the head pointer
        ptr = ptr->next;
    }
    display(head);
    return 0;
}