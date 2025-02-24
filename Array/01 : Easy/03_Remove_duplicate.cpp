#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    if (n == 0 || n == 1)
        return n;

    int j = 0; // Pointer for the unique elements

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[j])
        { // If a new unique element is found
            j++;
            arr[j] = arr[i]; // Move it forward
        }
    }

    return j + 1; // Return the new size of the array
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newSize = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
