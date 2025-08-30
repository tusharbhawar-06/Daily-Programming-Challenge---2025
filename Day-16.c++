#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(int a, int b) {
    return (1LL * a * b) / gcd(a, b);
}

int main() {
    int N = 4, M = 6;
    cout << "LCM = " << lcm(N, M);
    return 0;
}
