#include<iostream>
using namespace std;

void Sort(int a[], int n) {
	int i = 0, mid = 0, j = n-1;
	
	while(mid <= j) {
		if(a[mid] == 0) {
			swap(a[mid], a[i]);
			i++;
			mid++;
		} else if(a[mid] == 1) {
			mid++;
		} else {
			swap(a[mid], a[j]);
			j--;
		}
	}
}

void printArray(int a[], int n) {
	cout << "Array: ";
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	int a[] = {1, 2, 1, 1, 0, 2, 1, 0, 1, 0, 1};
	int n = sizeof(a) / sizeof(a[0]);
	
	printArray(a, n);
	
	Sort(a, n);
	
	printArray(a, n);
	return 0;
	}
