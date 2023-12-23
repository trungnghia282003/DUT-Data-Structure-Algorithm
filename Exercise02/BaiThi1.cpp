#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int main() {
    int N;

    // a) 
    cout << "Nhap N: ";
    cin >> N;

    if (N > MAX_SIZE) {
        cout << "N phai nho hon hoac bang 100." << endl;
        return 1; 
    }

    int A[MAX_SIZE];
    cout << "Nhap vào mang A: ";
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // b)
    int B[MAX_SIZE];
    int bIndex = 0;

    for (int i = 0; i < N; ++i) {
        if (A[i] <= 0) {
            B[bIndex] = A[i];
            ++bIndex;
        }
    }

00    // c) 
    cout << "Mang A: ";
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Mang B: ";
    for (int i = 0; i < bIndex; ++i) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0; 
}

