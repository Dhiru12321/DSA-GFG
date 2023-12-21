#include <iostream>
using namespace std;
void countNumber(int n){
    int count= 0;
    while( n != 0 ){
        n = n/10;
        count++;
    }
    cout<<"the number of digit present in the number is:- "<<count<<endl;
}

int main(){
    int n;
    cout<<"enter the number so that we cout the no fo digit:- ";
    cin>>n;
    countNumber(n);
    return 0;
}