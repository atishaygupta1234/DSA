#include <iostream>
using namespace std;

class Stack{
    public:
    int size;
    int* arr;
    int top;

    Stack(int size){
        this->size=size;
        arr = new int[size];
        this->top=-1;
    }

    void push(int x){
        if(top==size-1){
            cout<<"Stack full!!!"<<endl;;
            return;
        }
        top++;
        arr[top]=x;
        cout<<"Inserted at "<<top<<"position."<<endl;
    }
    
    void pop(){
        if(top==-1){
            cout<<"Stack empty!!!"<<endl;
            return;
        }
        cout<<"Element popped from "<<top<<"position."<<endl;
        top--;
    }

    int peek(){
        if(top==-1){
            cout<<"Stack empty!!!"<<endl;
            return -1;
        }
        cout<<"Top element is "<<arr[top]<<endl;
    }

    bool isempty(){
        if(top==-1){
            return 1;
        }
        return 0;
    }

    void printstack(){
        if(top==-1){
            cout<<"Stack empty!!!"<<endl;
            return;
        }
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    ~Stack(){
    delete[] arr;
}

};

int main(){

    Stack s(5);
    cout<<s.isempty()<<endl;
    s.printstack();
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
    s.peek();
    s.pop();
    s.printstack();
    s.peek();
    cout<<s.isempty()<<endl;


    return 0;
}