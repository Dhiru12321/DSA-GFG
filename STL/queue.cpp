#include <bits/stdc++.h>
using namespace std;

void queueSTL(){

    // work in fifo data structure
    queue<int>q;
    q.push(1);
    q.push(6);
    q.push(3);
    q.push(5);
    q.emplace(3);
    
    // adding the back element with the given value 9
    q.back() += 9;
    cout<<q.back()<<endl;

    cout<<"size of the queue:- "<<q.size()<<endl;
 
    // pop from the front
    q.pop();
    cout<<"front element of the queue:- "<<q.front()<<endl;

    // front value is 6 and + 4  = 10;
    q.front() += 4;
    cout<<"size of the queue:- "<<q.size()<<endl;
    cout<<"removing the element of the array:- ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main(){
    queueSTL();
    return 0;
}