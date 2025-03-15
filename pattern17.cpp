#include <iostream>
using namespace std;

int main(){
    for(int i=1;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<char(64+j+i);
        }
        cout<<endl;
    }
    return 1;
}