#include <iostream>
using namespace std;

int main(){
    for(int i=1;i<5;i++){
        for(int j=4;j>i;j--){
            cout<<"-";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=i-1;j>0;j--){
            cout<<j;
        }

        cout<<endl;
    }
    return 1;
}