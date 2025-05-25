#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int x){
        this->data=x;
        this->next=NULL;
    }
};

class Stack{
    public:
    Node* head;

    Stack(){
        head=NULL;
    }

    void push(int x){
        Node* newu=new Node(x);
        if(head==NULL){
            head=newu;
            return;
        }
        newu->next=head;
        head=newu;
    }
    
    void pop(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
        }
        cout<<"Popping "<<head->data<<endl;
        head=head->next;
    }

    int peek(){
        if(head==NULL){
            cout<<"Stack Empty"<<endl;
            return -1;
        }
        return head->data;
    }

    bool isempty(){
        if(head==NULL){
            return 1;
        }
        return 0;
    }

    void printstack(){
        if(head==NULL){
            cout<<"Stack empty!!!"<<endl;
            return;
        }
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};

int main(){

    Stack s;
    s.printstack();
    cout<<s.isempty()<<endl;
    s.push(1);
    s.printstack();
    s.push(2);
    s.printstack();
    s.push(3);
    s.printstack();
    s.push(4);
    s.printstack();
    s.push(5);
    s.printstack();
    s.push(6);
    s.printstack();
    cout<<s.peek()<<endl;
    s.pop();
    s.printstack();
    cout<<s.peek()<<endl;
    cout<<s.isempty()<<endl;

    return 0;
}