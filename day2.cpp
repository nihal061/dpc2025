#include <iostream>
#include <vector>
using namespace std;

int MissingNumber(vector<int>& arr) {
    int n = arr.size() + 1;
    long long total = 1LL * n * (n + 1) / 2;
    long long sum = 0;

    for (int num : arr) {
        sum = sum + num;
    }

    return (total - sum);
}

int main() {
    vector<vector<int>> Arrays = {
        {1, 2, 4, 5},
        {2, 3, 4, 5},
        {1, 2, 3, 4},
        {1},
        {},
    };

    for (auto& arr : Arrays) {
        cout << "Missing number: " << MissingNumber(arr) << endl;
    }

    return 0;
}
