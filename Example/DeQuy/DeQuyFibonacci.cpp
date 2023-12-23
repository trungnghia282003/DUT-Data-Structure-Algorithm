#include<iostream>
using namespace std;

//Tinh day so Fibonacci bang phuong phap de quy

int fibonacci(int n) {
	if(n<0) {
		return -1;
	} else if(n==0 || n==1) {
		return n;
	} else {
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

int main() {
	int N;
	cout << "Nhap N:";
	cin >> N;
	printf("%d so dau tien cua day so Fibonacci: \n",N);
	for (int i = 0; i < N; i++) {
		printf("%d ", fibonacci(i));
	}
	return 0;
}
