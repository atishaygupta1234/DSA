#include <iostream>
using namespace std;
#include <vector>
#include <cmath>

int main(){
    int s=2;
    int h=100;
    int sqrtt=sqrt(h);

    vector<bool> prime(sqrtt+1,true);
    vector<int> primenumbers;

    prime[0]=prime[1]=false;

    for(int i=2;i<sqrtt;i++){
        if(prime[i]){
            primenumbers.push_back(i);
            for(int j=2*i;j<sqrtt;j+=i){
                prime[j]=0;
            }
        }
    }

    

    return 1;
}