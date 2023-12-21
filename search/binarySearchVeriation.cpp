#include <iostream>
using namespace std;
void binarySearch(int arr[], int size, int find){
    int left = 0;
    int right = size-1;
    bool flag = false;
    while(left <= right){
        int mid = (left + right)/2;
        if(arr[mid] == find){
            cout<<"element found at the index:- "<< mid<<endl;
            flag = true;
            break;
        }
        if(arr[mid] < find){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    if(flag == false){
        cout<<"element not present in the array"<<endl;
    }
}
int main(){
    int size;
    cout<<"enter the size of the arr:- ";
    cin>>size;
    int arr[size];
    cout<<"enter the element of the array:- ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int find;
    cout<<"enter the element you want to find in the array:- ";
    cin>>find;
    binarySearch(arr, size, find);
    return 0;
}