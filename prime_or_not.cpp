#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number to check: ";
    cin>>n;
    int ans=1;

    for(int i=2;i<n;i++){
        if(n%i==0){
            ans=0;
            break;
        }
    }

    if(ans==0){
        cout<<"not prime"<<endl;
    }
    else{
        cout<<"prime"<<endl;
    }

    return 1;
}