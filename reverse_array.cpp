#include <iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<"th element: ";
        cin>>arr[i];
    }

    print(arr,n);

    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i++],arr[j--]);
    }

    print(arr,n);

    return 1;
}