#include <bits/stdc++.h>
using namespace std;
void priorityQueue(){

    //! max heap
    priority_queue<int>pq;
    pq.push(5);
    pq.push(3);
    pq.push(6);

    pq.emplace(10);

    cout<<pq.top()<<endl;
    cout<<"element are stored in the greater priority on top:- ";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

    // we can also put the queue in the priority order
    //! min heap
    priority_queue<int, vector<int>, greater<int> > pq1;
    pq1.push(2);
    pq1.push(4);
    pq1.push(5);
    pq1.push(9);
    pq1.emplace(10);

    cout<<"element are stored in the greater priority on bottom:- ";
    while(!pq1.empty()){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }

}
int main(){
    priorityQueue();
    return 0; 
}