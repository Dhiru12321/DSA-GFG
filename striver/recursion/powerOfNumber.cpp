#include <iostream>
using namespace std;
int power(int a, int b){
    if(b != 0){
        return (a * power(a, b-1));
    }
    return 1;
}
int main(){
    int x = power(2,3);
    cout<<"power of the a^b:- "<<x;
    return 0;
}