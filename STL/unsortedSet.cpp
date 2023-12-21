#include <bits/stdc++.h>
using namespace std;
void unorderSetSTL(){
    // all the opearion are don like set have
    //! the element in the array are not in sorted way
    unordered_set<int>us;
    us.insert(2);
    us.insert(1);
    us.insert(10);
    us.insert(5);
    //! but the dublicates are not allowed
    us.insert(2);
    us.emplace(9);

    cout<<"unordered_set element are:- ";
    for(auto x : us){
        cout<<x<<" ";
    }
    cout<<endl;

    //erase 
    auto it = us.find(10);
    us.erase(it);
    cout<<"unordered_set element 10 erased:- ";
    for(auto x : us){
        cout<<x<<" ";
    }
    cout<<endl;

    // we can also erase multiple referance using pointere
    us.erase(us.find(1), us.find(3));

    cout<<"unordered_set erased from the referance 1 to 9:- ";
    for(auto x : us){
        cout<<x<<" ";
    }
    cout<<endl;



}
int main(){
    unorderSetSTL();
    return 0;
}