#include <iostream>
using namespace std;

void rs(string& s,int start,int end){
    if(start>=end){
        return;
    }

    swap(s[start],s[end]);

    rs(s,start+1,end-1);
}

int main(){

    string s="atishay";
    rs(s,0,s.length()-1);
    cout<<s<<endl;

    return 1;
}