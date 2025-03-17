#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int d;
    cout<<"Enter decimal no:";
    cin>>d;
    int binary=0;
    int i=0;
    while(d!=0){
        int digi=d&1;
        binary= (digi*pow(10,i))+binary;
        d=d>>1;
        i++;
    }
    cout<<binary<<endl;

    return 1;
}