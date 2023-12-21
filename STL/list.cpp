#include <bits/stdc++.h>

using namespace std;
void listSTL(){
    // it is same as vector but we can perform front and back activity
    list<int>ls;
    ls.push_back(2);
    ls.emplace_back(3);
    ls.push_front(1);
    ls.emplace_front(0);
    cout<<"printing all the list element:- ";
    for(auto x: ls){
        cout<< x <<" ";
    }
    cout<<endl;

    //insert operation
    ls.insert(ls.begin(), 5);
    ls.insert(ls.end(), 9);
    cout<<"printing all the list element:- ";
    for(auto x: ls){
        cout<< x <<" ";
    }
    cout<<endl;

    // erase 
    ls.erase(ls.begin());
    cout<<"printing all the list element:- ";
    for(auto x: ls){
        cout<< x <<" ";
    }
    cout<<endl;

     

    // also know the size of the list 
    cout<<ls.size()<<endl;
    // clear all the element 
    ls.clear();
    cout<<ls.empty()<<endl;


}
int main(){
    listSTL();
    return 0;
}