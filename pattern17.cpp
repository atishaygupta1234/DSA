#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            cout<<char(68-i+j);
        }
        cout<<endl;
    }
    return 1;
}