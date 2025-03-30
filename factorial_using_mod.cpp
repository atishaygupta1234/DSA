#include <iostream>
using namespace std;
#include <cmath>

int main(){
    int n=212;
    long long ans=1;
    int m=1e9+7;
    for(int i=n;i>0;i--){
        ans=(ans)%m*(i)%m;
    }
    cout<<"Factorial of "<<n<<" is: "<<ans<<endl; 
    return 1;
}