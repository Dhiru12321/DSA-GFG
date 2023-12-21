//! bad approche to find the prime factors because time complexity is 0(n^2 logn n)

#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    if(n == 2 || n == 3){
        return true;
    }
    if(n % 2 == 0 || n % 3 == 0){
        return false;
    }
    for(int i = 5; i*i <= n; i = i+6){
        if(n % i == 0 || n %(i + 2) == 0){
            return false;
        }
    }
    return true;
}

void primeFactor(int n){
    vector<int>factors;
    for(int i = 2; i <= n; i++){
        if(isPrime(n)){
            int x  = i;
            while(n % x == 0){
                factors.push_back(i);
                n = n/i;
            }
        }   
    }
    //print factors 
    cout<<"the prime factors are:- "<<endl;
    cout<<factors.size();
    for(auto x: factors){
        cout<<x<<", ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter the number to get it's prime factorizastion:- "<<endl;
    cin>>n;
    primeFactor(n);
    return 0;
}