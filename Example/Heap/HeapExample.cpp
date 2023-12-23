#include<iostream>
using namespace std;

// to demonstrate the max-heap function
void Max_Heap(int arr[], int i, int n) {
	int left = 2*i + 1;
	int right = 2*i + 2;
	int big = i;
	if (left < n && arr[left] > arr[i])
		big = left;
	if (right < n && arr[right] > arr[big])
		big = right;
	if (big != i) {
		swap(arr[i], arr[big]);
		Max_Heap(arr, big, n);
	}
}

// to demonstrate the min-heap function
void Min_Heap (int Arr[ ] , int i, int N) {
	int left  = 2*i;
	int right = 2*i+1;
	int small;
	if(left <= N and Arr[left] < Arr[ i ] )
		small = left;
	else
		small = i;
	if(right <= N and Arr[right] < Arr[small] )
		small = right;
	if(small!= i) {
		swap (Arr[ i ], Arr[small]);
		Min_Heap (Arr, small,N);
	}
}

//to build a max-heap function basically
void call_MaxHeap(int arr[], int n) {
	for (int i = (n-2)/2; i >= 0; --i)
		Max_Heap(arr, i, n);
}

//to build a min-heap function basically
void call_MinHeap(int arr[], int n) {
	for (int i = (n-2)/2; i >= 0; --i)
		Min_Heap(arr, i, n);
}

// to print the array of given size
void DisplayResult(int* arr, int size) {
	for (int i = 0; i < size; ++i)
		printf("%d ", arr[i]);
}

void DisplayResult1(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}


// to implement the max-heap function in the main()
int main() {

//	/ input values - array representing
//	int arr[] = {35, 33, 42, 10, 14, 19, 27, 44, 26, 31};
//	printf("Inputted Values : \n");
//	int n = sizeof(arr)/sizeof(arr[0]);
//	DisplayResult(arr, n);
//
//	call_MaxHeap(arr, n);
//	printf("\n\nDisplaying the result of Max Heap array : \n");
//	DisplayResult(arr, n);
//
//	call_MinHeap(arr, n);
//	printf("\n\nDisplaying the result of Min Heap array : \n");
//	DisplayResult(arr, n);
//	return 0;


	// input values - array representing
	int arr[] = {35, 33, 42, 10, 14, 19, 27, 44, 26, 31};
	std::cout << "Inputted Values : \n";
	int n = sizeof(arr) / sizeof(arr[0]);
	DisplayResult1(arr, n);

	// Call MaxHeap function
	call_MaxHeap(arr, n);
	std::cout << "\n\nDisplaying the result of Max Heap array : \n";
	DisplayResult1(arr, n);

	// Call MinHeap function
	call_MinHeap(arr, n);
	std::cout << "\n\nDisplaying the result of Min Heap array : \n";
	DisplayResult1(arr, n);

	return 0;
}
