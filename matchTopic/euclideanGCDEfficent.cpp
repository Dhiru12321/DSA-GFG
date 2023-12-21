#include <iostream>
using namespace std;

// !recursive approche
// int gcd(int a, int b){
//     if(b == 0)
//         return a;
//     else
//         return gcd(b, a%b);
// }

void euclideanGCD(int a, int b){
    while(a != b){
        if(a > b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }
    cout<<"the greatest common devisor is:- "<<a<<endl;
}
int main(){
    int a,b;
    cout<<"enter the number a and b to get it's commond devisor:- ";
    cin>>a>>b;
    euclideanGCD(a, b);
    return 0;
}