#include <iostream>
using namespace std;

int countSubstrings(string s, int k) {
    int n = s.size();
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int freq[26] = {0}; // track letters
        int distinct = 0;

        for (int j = i; j < n; j++) {
            int idx = s[j] - 'a';
            if (freq[idx] == 0) distinct++; // new character
            freq[idx]++;

            if (distinct == k) ans++;
        }
    }
    return ans;
}

int main() {
    string s = "pqpqs";
    int k = 2;
    cout << "Count: " << countSubstrings(s, k);
    return 0;
}
