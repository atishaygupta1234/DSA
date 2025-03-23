#include <iostream>
using namespace std;

//best case - 0(n)
//worst case - 0(n2)

int main(){
    int arr[]={10,9,8,7,6};
    int n=5;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=1;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            cout<<"Breaking in between"<<endl;
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 1;
}