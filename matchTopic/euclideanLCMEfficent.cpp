// todo->
// the logic to find the LCM we just need to find the HCF and mutliply the bumber and divide by the HCF value will return the LCM
// example 
//   4 6
// HCF = 2;
// 4*6 = 24
// 24 / hcf = 2 here.  24/2 = 12
//and the 12 is the LCM

#include <iostream>
using namespace std;
int HCF(int a, int b){
    if(b == 0)
        return a;
    else
        return HCF(b, a%b);
}
void euclideanLCM(int a, int b){
    cout<<"the LCM of the given number is:- "<<(a * b) / HCF(a, b)<<endl; 
}
int main(){
    int a,b;
    cout<<"enter the value of a and b:- ";
    cin>>a>>b;
    euclideanLCM(a, b);
    return 0;
}