#include <iostream>
using namespace std;

int main(){
    for(int i=1;i<=4;i++){
        for(int j=4-i;j>0;j--){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 1;
}