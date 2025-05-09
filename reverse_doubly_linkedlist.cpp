#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int value){
        this->data = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertattail(Node* head,int data){
    Node* temp=head;
    Node* newu=new Node(data);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newu;
    newu->prev=temp;
}

void printll(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void reversell(Node* &head){
    Node* temp=head;
    while(temp->next!=NULL){
        swap(temp->prev,temp->next);
        temp=temp->prev;
    }
    swap(temp->prev,temp->next);
    head=temp;
}

int main(){

    Node* node1=new Node(5);
    Node* head=node1;

    printll(head);
    insertattail(head,6);
    printll(head);
    insertattail(head,7);
    printll(head);
    insertattail(head,8);
    printll(head);
    insertattail(head,9);
    printll(head);
    reversell(head);
    printll(head);

    return 0;
}