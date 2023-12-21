#include <iostream>
using namespace std;
void countTheAccurence(int pat, int text, int n, int m){
    unordered_map<int, char> m;
    int i = 0;
    int j = n-1;
    while( j < i){
        if(m[pat[i]] != m[text[j]]){
            m[pat[i]]++;
            if(){

            }
        }
        j = j + 1 - i;
        if(j == i){
            j++;
            i++;
        }
        else{
            j--;
            i--;
        }
    }

}
int main(){
    int size, size1;
    cout<<"enter the size:- "<<endl;
    cin>>size;
    cout<<"enter the size1:- "<<endl;
    cin>>size1;
    int arr[size];
    int arr1[size1];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    for(int i=0; i<size1; i++){
        cin>>arr1[i];
    }
    countTheAccurence(arr, arr1, size, size1);
    return 0;
}