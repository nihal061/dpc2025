#include <iostream>
#include <vector>
using namespace std;

void mergeAndSort(vector<int>& a1, vector<int>& a2) {
    int m = a1.size();
    int n = a2.size();

    for (int i = 0; i < m; i++) {
        if (a1[i] > a2[0]) {
            swap(a1[i], a2[0]);

            int first = a2[0];
            int k = 1;
            
            while (k < n && a2[k] < first) {
                a2[k - 1] = a2[k];
                k++;
            }
            
            a2[k - 1] = first;
        }
    }
}

int main() {          
    vector<int> a1 = {1, 3, 5};
    vector<int> a2 = {2, 4, 6};

    mergeAndSort(a1, a2);

    cout << "Array 1 = ";
    for (int i : a1) cout << i << " ";
    cout << "\nArray 2 = ";
    for (int i : a2) cout << i << " ";
}
