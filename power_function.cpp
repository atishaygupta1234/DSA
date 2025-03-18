#include <iostream>
using namespace std;

int pow(int a, int b){
    int ans=1;
    for(int i=0;i<b;i++){
        ans*=a;
    }
    return ans;
}

int main(){

    cout<<pow(3,15)<<endl;

    return 1;
}