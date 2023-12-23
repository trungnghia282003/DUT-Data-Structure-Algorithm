#include<iostream>
using namespace std;

int calculateSum(int num) {
	int res;
	if(num == 1) {
		return 1;
	} else {
		res = num + calculateSum(num-1);
	}
	return res;
};

int main() {
	int num;
	cout << "Nhap number:";
	cin >> num;
	int result;

	result=calculateSum(num);
	printf("Tong cac so tu 1 toi %d la: %d",num, result);
	return 0;
}
