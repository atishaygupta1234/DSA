#include <iostream>
using namespace std;

int main(){
    for(int i=1;i<15;i++){
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 1;
}