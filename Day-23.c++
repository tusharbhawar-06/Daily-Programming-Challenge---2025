#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int n = 8, k = 3;

    cout << "Sliding window maximums: ";
    for (int i = 0; i <= n - k; i++) {
        int maxi = arr[i];
        for (int j = i; j < i + k; j++) {
            if (arr[j] > maxi) maxi = arr[j];
        }
        cout << maxi << " ";
    }
    return 0;
}
