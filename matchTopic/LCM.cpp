#include <iostream>
using namespace std;
void LCM(int a, int b){
    int num = max(a, b);
    while(true){
        if(num%a == 0 && num%b == 0){
            break;
        }
        num++;
    }
    cout<<"the greates common devisor is:- "<<num;
}
int main(){
    int a,b;
    cout<<"enter the value of a and b:- "<<endl;
    cin>>a>>b;
    LCM(a, b);
    return 0;
}