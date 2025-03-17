#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int bin;
    cout<<"Enter binary no: ";
    cin>>bin;
    int dec=0;
    int i=0;
    while(bin!=0){
        int digi=bin%10;
        dec+=pow(2,i)*digi;
        bin/=10;
        i++;
    }
    cout<<dec<<endl;
    return 1;
}