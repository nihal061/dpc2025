#include <iostream>
#include <vector>
using namespace std;

int duplicateNumber(vector<int>& a) {
    int i = a[0];
    int j = a[0];

    do {
        i = a[i];
        j = a[a[j]];
    } while (i != j);

  
    i = a[0];
    while (i != j) {
        i = a[i];
        j = a[j];
    }

    return i;
}

int main() {
    vector<vector<int>> Arrays = {
        {1, 3, 4, 2, 2},
        {3, 1, 3, 4, 2},
        {1, 1},
        {1, 4, 4, 2, 3},
        {1, 2, 3, 4, 5, 6, 3}
    };

    for (auto& a : Arrays) {
        cout << "Duplicate number: " << duplicateNumber(a) << endl;
    }
    return 0;
}
