#include <iostream>
using namespace std;

int main(){
    int m=1;
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            cout<<char(64+m);
            m++;
        }
        cout<<endl;
    }
    return 1;
}