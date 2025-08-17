#include <iostream>
#include <vector>
using namespace std;

int dup(vector<int>& arr) {
    
    int slow = arr[0];
    int fast = arr[0];

    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    
    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
}

int main() {
    vector<int> arr1 = {1, 3, 4, 2, 2};
    cout << "Duplicate: " << dup(arr1) << endl;

    vector<int> arr2 = {3, 1, 3, 4, 2};
    cout << "Duplicate: " << dup(arr2) << endl;

    vector<int> arr3 = {1, 1};
    cout << "Duplicate: " << dup(arr3) << endl;

    vector<int> arr4 = {1, 4, 4, 2, 3};
    cout << "Duplicate: " << dup(arr4) << endl;

    return 0;
}
