#include <bits/stdc++.h>
#include <set>
using namespace std;
void multiSetSTL(){
    // it also stored in sorted order
    // we can put all the multiple copy of similare elemnts
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.emplace(2);
    ms.insert(1);
    ms.insert(2);
    cout<<"all the multiple copys can be in arrya:- ";
    for(auto x : ms){
        cout<<x<<" ";
    }
    cout<<endl;

    //! this will erase all the element that are having 1 and its copy
    ms.erase(1);
    cout<<"all the copy of the 1 is now erased:- ";
    for(auto x : ms){
        cout<<x<<" ";
    }
    cout<<endl;

    //? now can erase the single and multiple element in the multi set like this
    auto it = ms.find(2);
    ms.erase(it);
    cout<<"only erase the single copy of the 2:- ";
    for(auto x : ms){
        cout<<x<<" ";
    }
    cout<<endl;


    // we can also erase the multiple element like this

    ms.insert(2);
    ms.insert(2);
    ms.insert(4);
    ms.insert(4);
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);
    ms.insert(5);
    cout<<"multi set element are:- ";
    for(auto x : ms){
        cout<<x<<" ";
    }
    cout<<endl;
    auto m = ms.find(3);
    auto n = ms.find(5);
    ms.erase(m, n);
    cout<<"erase the multiple copy from 3 to 5:- ";
    for(auto x : ms){
        cout<<x<<" ";
    }
    cout<<endl;
}
int main(){
    multiSetSTL();
    return 0;
}