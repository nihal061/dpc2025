#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) {
        return "";
    }
    
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
    vector<string> t1 = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(t1) << endl; 
    
    vector<string> t2 = {"dog", "racecar", "car"};
    cout << longestCommonPrefix(t2) << endl;  
    
    vector<string> t3 = {"apple", "ape", "april"};
    cout << longestCommonPrefix(t3) << endl;  
    
    vector<string> t4 = {""};
    cout << "\"" << longestCommonPrefix(t4) << "\"" << endl;
    
    vector<string> t5 = {"alone"};
    cout << longestCommonPrefix(t5) << endl; 
    
    return 0;
}
