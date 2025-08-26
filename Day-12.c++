#include <iostream>
#include <string>
using namespace std;

bool isValid(string s) {
    char st[1000]; 
    int top = -1;

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];

        if (c == '(' || c == '{' || c == '[') {
            st[++top] = c; 
        } else {
            if (top == -1) return false;
            if ((c == ')' && st[top] == '(') ||
                (c == '}' && st[top] == '{') ||
                (c == ']' && st[top] == '[')) {
                top--; // pop
            } else {
                return false;
            }
        }
    }
    return top == -1;
}

int main() {
    string s = "[{()}]";
    cout << (isValid(s) ? "true" : "false");
}
