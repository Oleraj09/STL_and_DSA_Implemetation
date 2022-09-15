#include<bits/stdc++.h>
using namespace std;
int main() {
    //Set just remove duplicate value then store data
    //set sort data in ascending order
    //set<int>s;
    //set<int>::iterator it;
    //s.insert(5);
    //s.insert(15);
    //s.insert(25);
    //s.insert(35);
    //s.insert(5);
    //Make a focus point
    //it = s.find(25);
    //s.erase(it);
    //we can use iterator in set
    //for(it = s.begin(); it != s.end();it++){
    //    cout<<*it<<" ";
    //}
    //cout<<endl;
    //return 0;

    //sort with lexical graphocal order
    set<string>s;
    set<string>::iterator it;
    s.insert("Adiba");
    s.insert("Enjamul");
    s.insert("OLeraj");
    s.insert("Badhon");
    for(it = s.begin(); it != s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    //pair using
    pair<set<string>::iterator,bool>p;
    p=s.insert("arnob");
    if(p.second==false){
        cout<<"Can not insert"<<endl;
    }else{
        cout<<"Inserted"<<endl;
    }
}
