#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int a=0;
    int b=1;
    int c;
    cout<<a<<" "<<b<<" ";
    while((n--)-2>0){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 1;
}