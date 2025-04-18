#include <iostream>
using namespace std;

string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void saydigit(int n){
    if(n==0){
        return;
    }

    saydigit(n/10);
    cout<<arr[n%10]<<" ";

}

int main(){

    saydigit(975);
    cout<<endl;

    return 1;
}