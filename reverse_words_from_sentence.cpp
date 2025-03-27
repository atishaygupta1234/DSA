#include <iostream>
using namespace std;

void rev(string &s, int st,int e){
    while(st<e){
        swap(s[st++],s[e--]);
    }
}

int main(){
    string s="im working from home";
    int n=s.length();

    int st=0;
    int e=-1;

    cout<<s<<endl;

    for(int i=0;i<n;i++){
        if(int(s[i]==32)){
            e=i-1;
            rev(s,st,e);
            st=i+1;
            e=-1;
        }
    }

    rev(s,st,n-1);

    cout<<s<<endl;

    return 0;
}