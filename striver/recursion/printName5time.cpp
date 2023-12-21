#include <iostream>
using namespace std;
void printName(int num){
    if(num == 6){
        return;
    }
    cout<<num<<":- Dhirendra kumar"<<endl;
    printName(num+1);
}
int main(){
    printName(1);
    return 0;
}