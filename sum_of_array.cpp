#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<"th element: ";
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
    return 1;
}