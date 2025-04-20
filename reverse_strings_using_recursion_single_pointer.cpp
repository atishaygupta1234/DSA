#include <iostream>
using namespace std;

void rs(string& s,int i){
    cout<<s<<endl;
    int e=s.length()-i-1;
    if(i>=e){
        return;
    }
    swap(s[i],s[e]);
    rs(s,i+1);
}

int main(){
    string s="atishay";
    rs(s,0);
    cout<<s<<endl;

    return 1;
}