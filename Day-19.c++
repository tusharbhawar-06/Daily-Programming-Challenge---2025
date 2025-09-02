#include <iostream>
using namespace std;

int main() {
    long long N;
    cout << "Enter number: ";
    cin >> N;

    int count = 0;
    for (long long i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            if (i * i == N) count++;   
            else count += 2;             
        }
    }

    cout << "Total divisors: " << count;
    return 0;
}
