#include <iostream>
using namespace std;

int main(){
    cout<<"Enter first number: ";
    int a;
    cin>>a;
    cout<<"Enter second number: ";
    int b;
    cin>>b;
    cout<<"Enter operator: ";
    char op;
    cin>>op;

    switch(op){
        case '+': cout<<"total is: "<<a+b<<endl; break;
        case '-': cout<<"total is: "<<a-b<<endl; break;
        case '*': cout<<"total is: "<<a*b<<endl; break;
        case '/': cout<<"total is: "<<a/b<<endl; break;
        case '%': cout<<"total is: 1"<<a%b<<endl; break;
        default: cout<<"idk this operator"<<endl;
    }

    return 1;
}