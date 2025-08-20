#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<pair<int,int>> findZeroSumSubarrays(vector<int>& arr) {
    unordered_map<long long, vector<int>> prefixMap;
    vector<pair<int,int>> result;
    long long prefixSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        prefixSum += arr[i];

        if (prefixSum == 0) {
            result.push_back({0, i});
        }

        if (prefixMap.find(prefixSum) != prefixMap.end()) {
            for (int startIndex : prefixMap[prefixSum]) {
                result.push_back({startIndex + 1, i});
            }
        }

        prefixMap[prefixSum].push_back(i);
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, -3, 3, -1, 2};
    int n = arr.size();
    
    cout << "Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    vector<pair<int,int>> res = findZeroSumSubarrays(arr);

    cout << "Zero-sum subarrays: ";
    for (auto &p : res) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    return 0;
}
