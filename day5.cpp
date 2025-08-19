#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findLeaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    int max = arr[n - 1]; 
    leaders.push_back(max);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= max) {
            leaders.push_back(arr[i]);
            max = arr[i];
        }
    }

    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    
    vector<int> result = findLeaders(arr);
    
    cout << "Leaders: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}
