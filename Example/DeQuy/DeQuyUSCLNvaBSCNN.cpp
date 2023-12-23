#include<iostream>
using namespace std;

//Tim uoc so chung lon nhat
int USCLN(int a, int b) {
	if(b==0) return a;
	return USCLN(b, a%b);
}

//Tim boi so chung nho nhat
int BSCNN(int a, int b) {
	return (a*b)/USCLN(a,b);
}

int main() {
	int a , b ;
	cout << " Nhap hai so a va b :";
	cin >> a >> b;
	//USCLN cua a va b
	printf("\nUSCLN cua %d va %d la: %d", a , b , USCLN(a,b));
	//BSCNN cua a va b
	printf("\nBSCLN cua %d va %d la: %d", a , b , BSCNN(a,b));

	return 0;
}
