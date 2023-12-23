#include<iostream>
using namespace std;

void Swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void InterchangeSort(int a[], int n) {
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if(a[i] > a[j])  //neu co nghich thi doi cho
				Swap(a[i], a[j]);
}
int main() {
	int n;
	cout << "Nhap N: ";
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	InterchangeSort(a, n);

	cout << "Mang sau khi sap xep:";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
