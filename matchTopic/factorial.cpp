// recursive approche to find the factorial of the given number
#include<iostream>
using namespace std;
int findFactor(int n){
    if(n == 0){
        return 1;
    }
    return (n * findFactor(n -1));
}
int main(){
    int n;
    cout<<"enter the no ro find it's factorial:- "<<endl;
    cin>>n;
    cout<<"the factorial value is:- "<<findFactor(n);
    return 0;
}