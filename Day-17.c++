#include <iostream>
using namespace std;

int main() {
    long long N;
    cout << "Enter number: ";
    cin >> N;

    cout << "Prime factors: ";

    while (N % 2 == 0) {
        cout << 2 << " ";
        N = N / 2;
    }

    for (long long i = 3; i * i <= N; i += 2) {
        while (N % i == 0) {
            cout << i << " ";
            N = N / i;
        }
    }

    if (N > 2) cout << N;

    return 0;
}
