#include <iostream>
#include <vector>
using namespace std;

string common(vector<string>& strs) {
    if (strs.empty()) return "";

    string prefix = strs[0]; 

    for (int i = 1; i < strs.size(); i++) {
        while (strs[i].find(prefix) != 0) {  
            
            prefix = prefix.substr(0, prefix.size() - 1);
            if (prefix.empty()) return "";
        }
    }
    return prefix;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << common(strs) << endl;
}
