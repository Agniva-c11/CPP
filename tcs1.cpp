#include <iostream>
using namespace std;

void pushZerosToEnd(int arr[], int n) {
    int nonZeroIndex = 0;  

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[nonZeroIndex]);
            nonZeroIndex++;
        }
    }
}

int main() {
    int arr[] = {4, 5, 0, 1, 9, 0, 5, 0};  
    int n = sizeof(arr) / sizeof(arr[0]);  

    pushZerosToEnd(arr, n);  

 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

