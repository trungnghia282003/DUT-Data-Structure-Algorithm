#include<iostream>
using namespace std;

void insertionSort(int a[], int array_size) {
	int i, j, last;
	for (i=1; i < array_size; i++) {
		last = a[i];
		j = i;
		while ((j > 0) && (a[j-1] > last)) {
			a[j] = a[j-1];
			j = j - 1;
		}
		a[j] = last;
	}
}

void selectionSort(int a[], int n) {
	int i, j, min, temp;
	for (i = 0; i < n-1; i++) {
		min = i;
		for (j = i+1; j < n; j++) {
			if (a[j] < a[min]) min = j;
		}
		swap(a[i], a[min]);
	}
}

void bubbleSort(int a[], int n) {
	int i, j;
	for (i = (n-1); i >= 0; i--) {
		for (j = 1; j <= i; j++) {
			if (a[j-1] > a[j])
				swap(a[j-1],a[j]);
		}
	}
}

int main() {
	int n;
	cout << "Nhap N: ";
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	bubbleSort(a, n);

	cout << "Mang sau khi sap xep:";
	for (int i = 0; i < n; i++) {
		if(a[i] % 2 ==0)
		cout << a[i] << " ";
//		for (int i = 0; i < n; i++) {
//			cout << a[i] << " ";
//		}
	}

	cout << endl;
	return 0;
}
