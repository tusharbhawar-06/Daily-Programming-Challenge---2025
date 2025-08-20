#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> find(vector<int>& arr) {
    vector<pair<int, int>> result;
    int n = arr.size();

  
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == 0) {
                result.push_back({i, j});
            }
        }
    }
    return result;
}

int main() {
    vector<int> arr = {1, 2, -3, 3, -1, 2};
    vector<pair<int, int>> ans = find(arr);

    cout << "Zero-sum subarrays: ";
    for (auto p : ans) {
        cout << "(" << p.first << "," << p.second << ") ";
    }
}
