#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<=4;j++){
            cout<<char(65+i+j);
        }
        cout<<endl;
    }
    return 1;
}