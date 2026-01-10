#include <iostream>
using namespace std;

int main() {

    int arr[] = {5, 2, 8, 1, 3, 6};
    int n = 6;

    // Step 1: Sort the array in ascending order
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Magic Sorted Array: ";

    // Step 2: Print even numbers (ascending)
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }

    // Step 3: Print odd numbers (descending)
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}

