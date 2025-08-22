#include <iostream>
#include <vector>
using namespace std;

string reverse(string s) {
    vector<string> words;
    string word = "";

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ')
            word += s[i];
        else if (!word.empty()) {
            words.push_back(word);
            word = "";
        }
    }
    if (!word.empty()) words.push_back(word);

    string result = "";
    for (int i = words.size() - 1; i >= 0; i--) {
        result += words[i];
        if (i > 0) result += " ";
    }

    return result;
}

int main() {
    string s = "   the   sky   is  blue   ";
    cout << "Output: \"" << reverse(s) << "\"" << endl;
}
