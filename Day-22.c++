#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 1, 4, 4, 5, 2, 6, 1, 4};
    int n = 9, k = 2;

    // count frequencies
    int freq[1000] = {0};
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == k) {
            cout << "First element with frequency " << k << " is: " << arr[i];
            return 0;
        }
    }

    cout << -1;
    return 0;
}
