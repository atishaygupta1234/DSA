#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int sum=0;
    for(int i=0;i<n;){
        sum+=i;
        i+=2;
    }
    cout<<endl;
    cout<<sum<<endl;
    return 1;
}