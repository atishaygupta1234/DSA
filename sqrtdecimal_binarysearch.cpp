#include <iostream>
using namespace std;

int bsint(int n){
    int s=0;
    int e=n;
    int ans=-1;
    long mid=(s+e)/2;
    while(s<=e){
        long sq=mid*mid;

        if(sq==n){
            return mid;
        }

        if(sq<n){
            ans=s;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

float bsfloat(int intval,int n){
    float ans=0;
    for(float i=0.1;i<=0.9;i=i+0.1){
        float val=i+float(intval);
        if(val*val<float(n)){
            ans=i;
        }
    }
    return ans;
}

double moreprecision(int n,int intval,int precision){
    double factor=1;
    double ans=intval;

    for(int i=0;i<precision;i++){
        factor*=0.1;
        for(double j=ans;j*j<n;j+=factor){
            ans=j;
        }
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter number: ";
    cin>>n;

    int intval= bsint(n);
    cout<<intval<<endl;
    float floatval= bsfloat(intval, n);
    cout<<floatval<<endl;
    double precision = moreprecision(n,intval,4);
    cout<<precision<<endl;

    return 1;
}