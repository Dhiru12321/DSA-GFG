// todo->best way to handel the problem time is less compare to all
// ! this is the first way to represent the natural sum of the given number
#include <iostream>
using namespace std;
int main(){
    cout<<"enter the number to get it's natural sum:- "<<endl;
    int n;
    cin>>n;
    int sum;
    sum = n*(n+1)/2;
    cout<<"the sum of the given natural number is:- "<<endl;
    cout<<sum<<endl;
    return 0;
}

// todo-> good way to handel the problem but average time consuption 
// ! this is the second way to represent the natural sum of the given number
#include <iostream>
using namespace std;
int main(){
    cout<<"enter the number to get it's natural sum:- "<<endl;
    int n;
    cin>>n;
    int sum;
    for(int i=1; i<=n; i++){
        sum = sum + i;
    }
    cout<<"the sum of the given natural number is:- "<<endl;
    cout<<sum<<endl;
    return 0;
}

// todo-> worst way to handel the problem but time consuption much more than usual
// ! this is the third way to represent the natural sum of the given number
#include <iostream>
using namespace std;
int main(){
    cout<<"enter the number to get it's natural sum:- "<<endl;
    int n;
    cin>>n;
    int sum;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            sum++;
        }
    }
    cout<<"the sum of the given natural number is:- "<<endl;
    cout<<sum<<endl;
    return 0;
}
