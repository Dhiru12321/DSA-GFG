#include <bits/stdc++.h>
using namespace std;
void vectorsSTL(){
    // vectors
    vector<int> v;

    v.push_back(1);
    cout<<"push_back:- ";
    cout<<v[0]<<endl;
    // it is a new word as similar to push_back but it is faster than 
    //  push_back
    v.emplace_back(2);
    cout<<"emplace_back:- ";
    cout<<v[0]<<endl;

    // vector having 5 space 
    vector<int>vec(5);
    // todo-> iterate the vecotr using itereator
    cout<<"iterating the vector through iterator:- ";
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
        cout<< *(it)<< " ";
    };
    cout<<endl;

    // second approche
    cout<<"normal for loop:- ";
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //! vector that store the pair
    vector<pair<int, int> >vp;

    vp.push_back({1, 2});
    cout<<"push_back in pair:- ";
    for(auto x : vp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    vp.emplace_back(2, 1);
    cout<<"emplace_back in pair:- ";
    for(auto x : vp){
        cout<<x.first<<" "<<x.second<<", ";
    }
    cout<<endl;
     
    // vector having 5 element value 10
    vector<int> vi(5, 10);

    cout<<"vector having five element with value 10:- ";
    for(auto x : vi){
        cout<<x<<", ";
    }
    cout<<endl;
    
    // vector storing the other vector
    vector<int> v2(vi);

    cout<<"vector store the other vector:- ";
    for(auto x : v2){
        cout<<x<<", ";
    }
    cout<<endl;



    // ! delete or erase the vector element at specific posistion 
    vector<int>vep{1, 2, 3, 4, 5, 6};
    cout<<"erasing the index 1 element:- ";
    vep.erase(vep.begin()+1);
    // i can also delete the multiple element from the array using the above methord
    // vep.erase(vep.begin()+1, vep.begin()+4);
    for(auto x: vep){
        cout<<x<<" ";
    }
    cout<<endl;



    //? insert in  the vector
    cout<<"insert the element to index 1:- ";
    // i can also insert the multiple element in the vecotre on specific positioin 
    vep.insert(vep.begin()+1, 1, 4);
    vep.insert(vep.begin()+1, 2);
    for(auto x: vep){
        cout<<x<<" ";
    }
    cout<<endl;

    // now size of the vecotr
    cout<<vep.size();
    // swap the two vector
    vec.swap(vep);
    // clear all the elemen form the vector;
    vep.clear();
    // we can also check if the vector is empty or not
    cout<<vep.empty();

}
int main(){
    vectorsSTL();
    return 0;
}