#include<bits/stdc++.h>
using namespace std;
int main(){
    //There is no iterattor in stack
    //stack count frist element as last.
    stack<string>st;
    st.push("Oleraj");
    st.push("Haque");
    st.push("Enjamul");
    //st.pop();
    //cout<<st.top()<<endl;
    while(!st.empty()){
        string x;
        x=st.top();
        cout<<x<<endl;
        st.pop();
    }
    return 0;
}
