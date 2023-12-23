#include<iostream>
using namespace std;
void TOH(int num, char x, char y, char z) {
	if (num > 0) {
		TOH(num - 1, x, z, y);
		printf("\n%c -> %c", x, y);
		TOH(num - 1, z, y, x);
	}
}
int main() {
	int num;
	printf("Nhap so dia: ");
	scanf("%d", &num);
	TOH(num, 'A', 'B', 'C');
	return 0;
}
