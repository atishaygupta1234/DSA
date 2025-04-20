#include <iostream>
using namespace std;

bool cp(string& s,int st,int e){
    if(st>e){
        return true;
    }

    if(s[st]==s[e]){
        bool ans = cp(s,st+1,e-1);
        return ans;
    }
    else{
        return false;
    }

}

int main(){
    string s="abbccbba";
    cout<<cp(s,0,s.length()-1)<<endl;

    return 1;
}