#include <iostream>
#include <string>
using namespace std;

void permute(string s, int l, int r) {
    if (l == r) {
        cout << s << endl; 
        return;
    }
    for (int i = l; i <= r; i++) {
        char temp = s[l];
        s[l] = s[i];
        s[i] = temp;

        // recurse
        permute(s, l + 1, r);

        temp = s[l];
        s[l] = s[i];
        s[i] = temp;
    }
}

int main() {
    string s = "abc";
    permute(s, 0, s.size() - 1);
    return 0;
}
