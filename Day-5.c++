#include <iostream>
#include <vector>
using namespace std;

vector<int> find(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    int maxRight = arr[n - 1];
    leaders.push_back(maxRight);
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            leaders.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    

    for (int i = 0, j = leaders.size() - 1; i < j; i++, j--) {
        swap(leaders[i], leaders[j]);
    }
    
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    
    vector<int> result = find(arr);
    
    cout << "Leaders: ";
    for (int x : result) cout << x << " ";
}
