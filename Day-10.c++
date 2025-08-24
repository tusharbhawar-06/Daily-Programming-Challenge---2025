#include <iostream>
#include <string>
using namespace std;

string sortWord(string s) {
    for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j < s.size(); j++) {
            if (s[j] < s[i]) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    return s;
}

int main() {
    string arr[6] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    int n = 6;
    bool used[6] = {false};

    cout << "[";
    for (int i = 0; i < n; i++) {
        if (used[i]) continue;

        cout << "[";
        cout << arr[i];
        used[i] = true;
        string sortedI = sortWord(arr[i]);

        for (int j = i + 1; j < n; j++) {
            if (!used[j] && sortWord(arr[j]) == sortedI) {
                cout << ", " << arr[j];
                used[j] = true;
            }
        }
        cout << "]";
    }
    cout << "]";

    return 0;
}
