#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void printll(Node* tail){
    if(tail == NULL) return;
    Node* temp = tail->next;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while(temp != tail->next);
    cout << endl;
}

void inserthead(Node* tail,int data){
    Node* newu=new Node(data);
    newu->next=tail->next;
    tail->next=newu;
}

void insertlast(Node* &tail,int data){
    Node* newu=new Node(data);
    newu->next=tail->next;
    tail->next=newu;
    tail=newu;
}

void deletehead(Node* tail){
    Node* temp=tail->next;
    tail->next=tail->next->next;
    delete(temp);
}

void deletelast(Node* &tail){
    Node* ptr=tail->next;
    while(ptr->next!=tail){
        ptr=ptr->next;
    }
    ptr->next=tail->next;
    Node* temp=tail;
    tail=ptr;
    delete(temp);
}

int main(){
    Node* nn=new Node(5);
    nn->next=nn;
    Node* tail = nn;
    inserthead(tail,4);
    printll(tail);
    insertlast(tail,6);
    printll(tail);
    insertlast(tail,7);
    printll(tail);
    insertlast(tail,8);
    printll(tail);
    deletelast(tail);
    printll(tail);

    return 0;
}