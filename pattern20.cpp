#include <iostream>
using namespace std;

int main(){
    int m=1;
    for(int i=1;i<=4;i++){
        for(int j=4-i;j>0;j--){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<m;
            m++;
        }
        cout<<endl;
    }
    return 1;
}