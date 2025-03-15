#include <iostream>
using namespace std;

int main(){
    int f;
    cout<<"Enter Temperature in farenheit: ";
    cin>>f;
    int c=(f-32)*(5.0/9.0);
    cout<<"Temperature in celcius is: ";
    cout<<c<<endl;
    return 1;
}