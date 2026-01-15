#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j] = 0;
            }
        }
    }

    cout << "duplicati convert into0: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
