#include<bits/stdc++.h>
using namespace std;
int main() {
    //queue front() count from top value
    //Frist mean frist
    //queue<int>q;
    //q.push(293);
    //q.push(121);
    //q.push(433);
    //st.pop();
    //cout<<st.top()<<endl;
    //while(!q.empty()){
    //int x;
    //    x=q.front();
    //x=q.back();
    //    cout<<x<<endl;
    //    q.pop();
    //}
    //return 0;

    //Priority Queue
    //Value is greater is priority high
    priority_queue<string>pq;
    pq.push("Abidatun");
    pq.push("Oleraj");
    pq.push("Haque");
    pq.push("Enjamul");
    //st.pop();
    //cout<<st.top()<<endl;
    while(!pq.empty()) {
        string x;
        x=pq.top();
        cout<<x<<endl;
        pq.pop();
    }
    return 0;


}
