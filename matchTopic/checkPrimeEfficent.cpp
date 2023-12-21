#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n == 1){
        return false;
    }
    if(n == 2 || n == 3){
        return true;
    }
    // so have to also check number canot devide with the 2 and 3
    if(n % 2 == 0 || n % 3 == 0){
        return false;
    }
    // now check from the devisor
    for(int i = 5;  i*i <= n; i = i+6 ){
        //? now check with is n is devisible by i+3 then it is not prime
        if(n % i == 0 || n %(i+ 2) == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"enter the number to check it is prime or not:- "<<endl;
    cin>>n;
    if(isPrime(n)){
        cout<<"yes prime "<<endl;
    }
    else{
        cout<<"not a prime";
    }    return 0;
}