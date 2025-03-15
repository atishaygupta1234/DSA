#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    int ascii=int(ch);
    if(ascii>=65 && ascii<=90){
        cout<<"Uppercase"<<endl;
    }
    else if(ascii>=97 && ascii<=122){
        cout<<"Lowercase"<<endl;
    }
    else if(ascii>=48 && ascii<=57){
        cout<<"Number"<<endl;
    }
    else{
        cout<<"other"<<endl;
    }
    return 0;
}
