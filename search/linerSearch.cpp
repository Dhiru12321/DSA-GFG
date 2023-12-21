#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "size of the array:- ";
    cin >> size;
    int arr[size];
    cout << "enter the element of the array:- ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int a;
    cout << "enter the no you want to find in the array:- ";
    cin >> a;

    bool flag = 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == a)
        {
            cout << "element found on the array index:- " << i+1 << " and the element is:- " << arr[i] << endl;
            flag = 0;
            return 0;
        }
    }
    if (flag == 1)
    {
        cout << "sorry element is not exist in the array:- " << endl;
    }
    return 0;
}
