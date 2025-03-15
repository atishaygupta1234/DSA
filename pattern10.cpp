#include <iostream>
using namespace std;

int main(){
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            cout<<char(64+i);
        }
        cout<<endl;
    }
    return 1;
}