#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;
    
    for (string s : strs) {
        string key = s;
        sort(key.begin(), key.end()); 
        mp[key].push_back(s);
    }
    
    vector<vector<string>> result;
    for (auto& entry : mp) {
        result.push_back(entry.second);
    }
    
    return result;
}

int main() {
    vector<string> t1 = {"eat", "tea", "tan", "ate", "nat", "bat"};
    auto res1 = groupAnagrams(t1);
    for (auto& group : res1) {
        cout << "[ ";
        for (auto& w : group) cout << w << " ";
        cout << "]\n";
    }
    
    vector<string> t2 = {""};
    auto res2 = groupAnagrams(t2);
    for (auto& group : res2) {
        cout << "[ ";
        for (auto& w : group) cout << w << " ";
        cout << "]\n";
    }
    
    vector<string> t3 = {"a"};
    auto res3 = groupAnagrams(t3);
    for (auto& group : res3) {
        cout << "[ ";
        for (auto& w : group) cout << w << " ";
        cout << "]\n";
    }
    
    return 0;
}
