#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 18, 16, 17, 4, 3, 5, 2, 19};
    int n = 9;

    int largest = arr[0];
    int secondLargest = -1;

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Largest element = " << largest << endl;
    cout << "Second largest element = " << secondLargest << endl;

    return 0;
}
