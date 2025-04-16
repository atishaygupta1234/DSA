#include <iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"Enter no of rows: ";
    cin>>n;

    int* helpp=new int[n];

    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        cout<<"Enter no of elements: ";
        cin>>m;
        helpp[i]=m;
        arr[i]=new int[m];
    }

    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<helpp[i];j++){
            cin>>arr[i][j];
        }
    }

    cout<<"printing array"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<helpp[i];j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 

    for(int i=0;i<n;i++){
        delete [] arr[i];
    }
    delete []arr;
    
    cout<<"Everything deleted"<<endl;

    return 1;
}