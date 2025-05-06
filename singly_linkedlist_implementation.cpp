#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int value){
        this->data = value;
        this->next = NULL;
    }
};

void insertathead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next = head;
    head=temp;
};

void insertattail(Node* head,int data){
    Node* temp=head;
    Node* newu=new Node(data);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newu;
}

void insertatpos(Node* head,int data,int pos){
    Node* temp=head;

    Node* newu=new Node(data);
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }

    newu->next=temp->next;
    temp->next=newu;

}

void deletefirst(Node* &head){
    Node* temp=head;
    head=head->next;
    delete(temp);
}

void deletelast(Node* head){
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    Node* td=temp->next;
    temp->next=NULL;
    delete(td);
}

void deleteatpos(Node* head,int pos){
    Node* temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    Node* td=temp->next;
    temp->next=temp->next->next;
    delete(td);
}

void printll(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    Node* node1=new Node(5);
    Node* head=node1;

    printll(head);
    insertathead(head,6);
    printll(head);
    insertathead(head,7);
    printll(head);
    insertattail(head,4);
    printll(head);
    insertatpos(head,1,2);
    printll(head);
    insertatpos(head,69,2);
    printll(head);
    deletefirst(head);
    printll(head);
    deletelast(head);
    printll(head);
    deleteatpos(head,2);
    printll(head);

    return 0;
}