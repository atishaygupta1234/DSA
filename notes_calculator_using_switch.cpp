#include <iostream>
using namespace std;

int main(){
    cout<<"Enter amount: ";
    int a;
    cin>>a;

    switch(100){
        case 100: cout<<"100 rupis notes: "<<a/100<<endl;a%=100;
        case 50: cout<<"50 rupis notes: "<<a/50<<endl;a%=50;
        case 20: cout<<"20 rupis notes: "<<a/20<<endl;a%=20;
        case 1: cout<<"1 rupis coin: "<<a/1<<endl;a%=1;
    }

    return 1;
}