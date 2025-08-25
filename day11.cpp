#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void backtrack(string& s, vector<bool>& used, string& path, vector<string>& result) {
    if (path.size() == s.size()) {
        result.push_back(path);
        return;
    }
    
    for (int i = 0; i < s.size(); i++) {
        // Skip already used characters
        if (used[i]) continue;
        
        // Skip duplicates: if same char as previous and previous not used
        if (i > 0 && s[i] == s[i-1] && !used[i-1]) continue;
        
        // Choose
        used[i] = true;
        path.push_back(s[i]);
        
        // Explore
        backtrack(s, used, path, result);
        
        // Undo
        path.pop_back();
        used[i] = false;
    }
}

vector<string> permuteUnique(string s) {
    sort(s.begin(), s.end()); // important for duplicate skipping
    vector<string> result;
    vector<bool> used(s.size(), false);
    string path = "";
    backtrack(s, used, path, result);
    return result;
}

int main() {
    vector<string> res1 = permuteUnique("abc");
    for (auto& p : res1) cout << p << " ";  // abc acb bac bca cab cba
    cout << endl;
    
    vector<string> res2 = permuteUnique("aab");
    for (auto& p : res2) cout << p << " ";  // aab aba baa
    cout << endl;
    
    vector<string> res3 = permuteUnique("aaa");
    for (auto& p : res3) cout << p << " ";  // aaa
    cout << endl;
    
    return 0;
}
