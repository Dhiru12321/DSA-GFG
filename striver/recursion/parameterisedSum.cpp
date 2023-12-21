#include <iostream>
using namespace std;
void parameterisedSum(int i, int sum){
    if(i < 1){
        cout<<sum<<" ";
        return; 
    }
    parameterisedSum(i-1, sum+i);
}
int main(){
    parameterisedSum(3,0);
    return 0;
}