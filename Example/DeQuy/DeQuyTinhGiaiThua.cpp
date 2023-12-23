#include<iostream>
using namespace std;

long tinhGiaiThua(int n) {
	if(n>0) {
		return n * tinhGiaiThua(n-1);
	} else {
		return 1;
	}
}

int main() {
	int N;
	cout << "Nhap N:";
	cin >> N;
	printf("Giai thua cua %d la: %d\n", (N-1), tinhGiaiThua(N-1));
	printf("Giai thua cua %d la: %d\n", N, tinhGiaiThua(N));
	printf("Giai thua cua %d la: %d\n", (N+1), tinhGiaiThua(N+1));
	return 0;
}
