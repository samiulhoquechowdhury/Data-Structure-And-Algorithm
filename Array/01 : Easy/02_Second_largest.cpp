#include <iostream>
#include <limits.h>
using namespace std;

int secondLargest(int arr[], int size)
{
    if (size < 2)
    {
        cout << "Array must contain atleast two element" << endl;
        return -1;
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = secondLargest(arr, n);
    if (result != -1)
        cout << "The second largest element is: " << result << endl;
    else
        cout << "No second largest element found!" << endl;

    return 0;
}