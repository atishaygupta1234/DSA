#include <iostream>
using namespace std;

int main(){
    for(int i=1;i<5;i++){
        for(int j=0;j<4;j++){
            cout<<char(64+i+j);
        }
        cout<<endl;
    }
    return 1;
}