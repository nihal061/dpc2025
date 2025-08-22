#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

string reverseWords(string s) {
    stringstream ss(s);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    string result = "";
    for (int i = words.size() - 1; i >= 0; i--) {
        result += words[i];
        if (i != 0) result += " ";
    }

    return result;
}

int main() {
    cout << reverseWords("the sky is blue") << endl;      
    cout << reverseWords("  hello world  ") << endl;       
    cout << reverseWords("a good   example") << endl;       
    cout << "\"" << reverseWords("    ") << "\"" << endl;   
    cout << reverseWords("word") << endl;                   
    return 0;
}
