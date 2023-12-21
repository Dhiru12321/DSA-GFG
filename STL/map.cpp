#include <bits/stdc++.h>
using namespace std;

void mapSTL() {
    // Using map to store the frequency of elements
    map<int, int> m;

    // Inserting the frequency of the array
    for (int i = 0; i < 5; i++) {
        m[i]++;
    }

    cout << "Frequency of the elements are: "<<endl;
    for (auto x : m) {
        cout << x.first << ", " << x.second << endl;
    }
    cout << endl;

    // You can insert/update values like this
    m[1] = 2;

    // Inserting elements using insert function and initializer list
    map<int, int> mp;
    mp.insert({1, 2});
    mp.insert({2, 3});
    mp.insert({3, 2});

    // emplace can be used to insert elements efficiently
    mp.emplace(3, 4);

    auto it = mp.find(3);
    cout<<"key of the:- "<<it->second<<endl;

    cout << "Elements of the map after insertion: "<<endl;
    for (auto x : mp) {
        cout << x.first << ", " << x.second << endl;
    }
    cout << endl;

    // Using map with pairs
    map<int, pair<int, int>> mpai;
    mpai.emplace(1, make_pair(3, 2));
    mpai.insert({2, {2, 4}});
    mpai.insert({3, {3, 9}});

    map<pair<int, int>, int> mpai1;
    mpai1[{1, 3}] = 10;
    mpai1[{3, 0}] = 12;
    mpai1[{2, 6}] = 4;

    cout << "Elements of the map with pairs: "<<endl;
    for (auto it : mpai) {
        cout << it.first << " value-> " << it.second.first << ", " << it.second.second << endl;
    }
    cout << endl;

    // Iterating through mpai1
    cout << "Elements of pari key wiht value: "<<endl;
    for (auto it : mpai1) {
        cout << "{" << it.first.first << ", " << it.first.second << "} -> " << it.second << endl;
    }
    cout << endl;


    //!we can also use the upper bond and the lower bond in the map data structure
    // auto low = mpai.lower_bound(2);
    // auto heigh = mpai.upper _bound(3);

}

int main() {
    mapSTL();
    return 0;
}
