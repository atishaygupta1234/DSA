#include <iostream>
using namespace std;

int exp(int a,int b){
    cout<<a<<" "<<b<<endl;

    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    
    int ans=exp(a,b/2);

    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}

int main(){

    int a=2;
    int b=10;
    cout<<exp(a,b)<<endl;

    return 1;
}