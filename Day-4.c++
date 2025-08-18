#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size(), m = arr2.size();

    for (int i = 0; i < n; i++) {
        if (arr1[i] > arr2[0]) {
            
            int temp = arr1[i];
            arr1[i] = arr2[0];
            arr2[0] = temp;

            
            int first = arr2[0];
            int k;
            for (k = 1; k < m && arr2[k] < first; k++) {
                arr2[k - 1] = arr2[k];
            }
            arr2[k - 1] = first;
        }
    }
}

int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    merge(arr1, arr2);

    cout << "arr1 = ";
    for (int x : arr1) cout << x << " ";
    cout << "\narr2 = ";
    for (int x : arr2) cout << x << " ";
}
