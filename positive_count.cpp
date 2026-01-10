#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            count++;
        }
    }
    cout << "Total positive elements: " << count;

    return 0;
}
