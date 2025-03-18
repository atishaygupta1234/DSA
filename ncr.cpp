#include <iostream>
using namespace std;

int factorial(int a){
    int ans=1;
    for(int i=a;i>0;i--){
        ans*=i;
    }
    return ans;
}

int ncr(int n, int r){
    int num=factorial(n);
    int den=(factorial(r)*factorial(n-r));
    return num/den;
}

int main(){

    cout<<ncr(8,2)<<endl;

    return 1;
}