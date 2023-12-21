#include <bits/stdc++.h>
#include <stack>
using namespace std;
void stackSTL(){

    // work on the lifo data structure
    stack<int>s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.emplace(5);

    cout<<s.top();
    cout<<s.size();
    s.pop();
    cout<<s.empty();

    cout<<endl;
    cout<<"stack element are:- ";
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    stack<int>s1;
    s1.swap(s);
    s1.push(9);
    cout<<endl;
    cout<<"stack element are:- ";
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

}
int main(){
    stackSTL();
    return 0;
}