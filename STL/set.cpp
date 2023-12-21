#include <bits/stdc++.h>
#include <set>
using namespace std;
void setSTL(){

    //! also store the element in the sorted order  
    set<int> s;
    s.insert(1);
    s.insert(2);
    // similar element are not sotred in the list mean copy dosen't exist
    s.insert(2);
    s.insert(3);
    s.insert(5);
    s.emplace(4);
    

    // we can also find the upper and the lowe bound of the set element 
//! index are given depend upon the isertion not sorting noted
    auto low = s.lower_bound(2);
    auto high = s.upper_bound(4);
    cout<<"lower:- "<< *low <<", "<<"upper:- "<< *high<<endl;

    cout<<"all the element of the set in the sorte array:- ";
    for(auto x : s){
        cout<<x<<" ";
    }
    cout<<endl;

    // if the element present in the set then it will return the index pointer
    auto it = s.find(4);
    cout<<*it<<endl;

    // if the element in not present in the array then it will return the s.end(); 
    auto it2 = s.find(9);
    cout<<*it2<<endl;

    // erse keyword 

    s.erase(5);
    cout<<"element of the set after erasing the 5:- ";
    for(set<int>::iterator it = s.begin(); it != s.end(); it++ ){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    // erase multiple reference value 
    auto ita = s.find(1);
    auto itb = s.find(4);
    s.erase(ita,itb);
    cout<<"erasing 1 between 4 in the reference of ita and itb:- ";
    for(auto x: s){
        cout<<x<<" ";
    }
}
int main(){
    setSTL();
    return 0;
}