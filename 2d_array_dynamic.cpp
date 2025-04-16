#include <iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"Enter row: ";
    cin>>n;
    cout<<"Enter columns: ";
    cin>>m;

    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[m];
    }

    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"printing array"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 

    cout<<"Freeing memory: "<<endl;
    for(int i=0;i<n;i++){
        delete [] arr[i];
    }

    delete [] arr;

    return 1;
}