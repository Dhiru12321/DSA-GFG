#include <iostream>
using namespace std;
int binary(int arr[], int first, int last, int find){
    if(first <= last){
        int mid = (first+ last)/2;

        if(arr[mid] == find){
            return mid;
        }
        if(arr[mid] > find){
             return binary(arr, first, mid - 1, find);
        }
        return binary(arr, first + 1, mid, find);
    }
    // not found
    return -1;

}
int main(){
    int size;
    cout<<"enter the size of the array:- ";
    cin>>size;
    int arr[size];
    cout<<"enter the element of the array:- ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int find;
    cout<<"enter the element you wana find in the array:- ";
    cin>>find;
    int x = binary(arr, 0, size, find);
    if(x == -1){
        cout<<"element not found in the array"<<endl;
    }
    else{
        cout<<"element found in the array:- "<< x+1 <<endl;
    }
    return 0;
}