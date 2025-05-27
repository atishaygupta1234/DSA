#include <iostream>
using namespace std;
#include <string>
#include <stack>

int main(){
    string s="atishay";
    stack<char> st;
    for(auto i:s){
        st.push(i);
    }
    string rev="";
    while(!st.empty()){
        rev+=st.top();
        st.pop();
    }
    cout<<rev<<endl;

    return 0;
}