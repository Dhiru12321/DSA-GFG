#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n == 1){
        return false;
    }

    //! anoter methord is devisor are allways accure in the prime
    for(int i = 2; i*i <= n; i++ ){
        if(n %i == 0){
            return false;
        }
    }
    // normal approche
    // for(int i = 2; i < n; i++ ){
    //     if(n %i == 0){
    //         return false;
    //     }
    // }
    return true;
}
int main(){
    int n;
    cout<<"enter the number to check if it is prime or not:-";
    cin>>n;
    if(isPrime(n)){
        cout<<"yes prime "<<endl;
    }
    else{
        cout<<"not a prime";
    }
    return 0;
}