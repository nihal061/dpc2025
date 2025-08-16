#include<iostream>
using namespace std;

int missingValue(int a[], int n) {
	int t = 1;
	for(int i = 0; i <= n; i++) {
		if(t != a[i]) {
			return t;
		} else {
			t++;
		}
	}
}

void printArray(int a[], int n) {
	cout << "Array: ";
	for(int i = 0; i < n; i++) {
		cout << " " << a[i];
	}
	cout << endl;
}

int main() {
	int a1[] = {1, 2, 4, 5};
	int n1 = sizeof(a1) / sizeof(a1[0]);
	int num1 = missingValue(a1, n1);
	printArray(a1, n1);
	cout << "Missing number in Array1: " << num1 << endl;
	
	int a2[] = {2, 3, 4, 5};
	int n2 = sizeof(a2) / sizeof(a2[0]);
	int num2 = missingValue(a2, n2);
	printArray(a2, n2);
	cout << "Missing number in Array2: " << num2 << endl;
	
	int a3[] = {1};
	int n3 = sizeof(a3) / sizeof(a3[0]);
	int num3 = missingValue(a3, n3);
	printArray(a3, n3);
	cout << "Missing number in Array3: " << num3 << endl;
	
	int a4[] = {1, 2, 3, 4};
	int n4 = sizeof(a4) / sizeof(a4[0]);
	int num4 = missingValue(a4, n4);
	printArray(a4, n4);
	cout << "Missing number in Array4: " << num4 << endl;
	
	return 0;
}
