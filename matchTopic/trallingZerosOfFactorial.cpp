// // nive approche

// #include <iostream>
// using namespace std;
// int findFactorial(int n){
//     if(n == 0){
//         return 1;
//     }
//     return  n * (findFactorial(n-1));
// }
// int main(){
//     int n;
//     cout<<"enter the number:- ";
//     cin>>n;
//     int x = findFactorial(n);
//     int count = 0;

//     //! short and presise while loop to check the zeros is
//     // while(x %10 == 0){
//     //     count++;
//     //     x = x/10;
//     // }
//     while(x != 0){
//         int zeros = x % 10;
//         if(zeros == 0){
//             count++;
//         }
//         else{
//             break;
//         }
//         x = x/10;
//     }
//     cout<<"trailing zeros of the givne value in factorial is:- "<<count<<endl;

//     return 0;
// }

// optamiszed approche
#include <iostream>
using namespace std;
void findTrailingZeros(int n){
    int count = 0;
    for(int i = 5; i<=n; i = 5*i ){
        count = count + n /i;
    }
    cout<<"number of trailing zeros:- "<<count<<endl;
}
int main(){
    int n;
    cout<<"enter the value of n:- ";
    cin>>n;
    findTrailingZeros(n);
    return 0;
}
