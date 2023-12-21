// todo-> logic
// the logic of get the lowest factor that devie the number 
// so take the minimum of the given number and chek if the number remainder will equall to the zero for both
// then break else reduce the minumum number


#include <iostream>
using namespace std;
void greatestCommonDevisor(int a, int b){
    int num = min(a, b);
    while(num > 0){

        if(a % num == 0 && b % num == 0){
            break;
        }
        num--;
    }

    cout<<"the greatest common devisor(HCF):- "<<num<<endl;
}
int main(){
    int a,b;
    cout<<"enter the number a and b to find its greatest common devisor:-";
    cin>>a>>b;
    greatestCommonDevisor(a, b);
    return 0;
}