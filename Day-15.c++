#include <iostream>
using namespace std;

int longest(string s) {
    int n = s.size();
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        bool seen[256] = {false}; 
        int length = 0;

        for (int j = i; j < n; j++) {
            if (seen[s[j]]) break; 
            seen[s[j]] = true;
            length++;
            if (length > maxLen) maxLen = length;
        }
    }
    return maxLen;
}

int main() {
    string s = "abcabcbb";
    cout << "Longest length = " << longest(s);
    return 0;
}
