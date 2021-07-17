#include <iostream>
using namespace std;

class Node
{
public:
    int Data;
    Node* Next;
};

void printList(Node* n){
    while(n != NULL){
        cout<<n->Data<<endl;
        n=n->Next;
    }
};

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->Data = 1;
    head->Next = second;
    second->Data = 2;
    second->Next = third;
    third->Data = 3;
    third->Next = NULL;
    

    printList(head);
}


