#include <iostream>
#include <vector>
using namespace std;

void permutation(int index, vector<vector<int> >& ans, vector<int>& arr) {
    if (index == arr.size()) {
        ans.push_back(arr);
        return;
    }
    for (int i = index; i < arr.size(); i++) {
        swap(arr[index], arr[i]);
        permutation(index + 1, ans, arr);
        swap(arr[index], arr[i]);
    }
}

vector<vector<int> > findPermutation(vector<int>& arr) {
    vector<vector<int> > ans;
    permutation(0, ans, arr);
    return ans;
}

int main() {
    int size;
    cout << "Enter the size: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    vector<vector<int> > result = findPermutation(arr);
    sort(result.begin(), result.end());

    // Displaying the permutations using a simple for loop
    cout << "Permutations:" << endl;
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
