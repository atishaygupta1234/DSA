#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insertathead(Node* &head,int data){
    Node* newu=new Node(data);
    head->prev=newu;
    newu->next=head;
    head=newu;
}

void insertatend(Node* head,int data){
    Node* newu=new Node(data);
    while(head->next!=NULL){
        head=head->next;
    }
    newu->prev=head;
    head->next=newu;
}

void insertatpos(Node* head,int data,int pos){
    Node* newu=new Node(data);
    for(int i=0;i<pos-1;i++){
        head=head->next;
    }
    head->next->prev=newu;
    newu->next=head->next;
    newu->prev=head;
    head->next=newu;
}

void deletefirst(Node* &head){
    Node* temp=head;
    head=head->next;
    head->prev=NULL;
    delete(temp);
}

void deletelast(Node* head){
    while(head->next->next!=NULL){
        head=head->next;
    }
    Node* temp=head->next;
    head->next=NULL;
    delete(temp);
}

void deletepos(Node* head,int pos){
    for(int i=1;i<pos;i++){
        head=head->next;
    }
    Node* temp=head->next;
    head->next->next->prev=head;
    head->next=head->next->next;
    delete(temp);
}

void printll(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    Node* head=new Node(6);
    printll(head);
    insertathead(head,5);
    printll(head);
    insertatend(head,7);
    printll(head);
    insertatpos(head,1,2);
    printll(head);
    deletepos(head,2);
    printll(head);

    return 0;
}