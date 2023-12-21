#include <bits/stdc++.h>
using namespace std;
void pairSTL(){
    //! normal pair
    pair<int, int>p1 = {1, 3};
    cout<<p1.first<< ", " <<p1.second<<endl;

    // ! 2D pair or matrix
    pair<int, pair<int, int> >p2 = {1, {2, 3}};
    cout<<p2.first << " = " <<p2.second.first << ", " <<p2.second.second<<endl; 
    
    // ! array of pair (this lies into the utility libaray)
    pair<int, int>p3[4] = {{1, 2}, {2, 4}, {4, 5}, {7, 8}};
    for(int i=0; i < 4 ; i++){
        cout<<p3[i].first <<", "<<p3[i].second<<endl;
    }
    cout<<endl;
}
int main(){
    pairSTL();
    return 0;
}