// Find the largest element in an array

#include <iostream>
using namespace std;

int largestElement(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int arr[] = {12, 43, 213, 123, 565, 54};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest :" << largestElement(arr, size) << endl;
    return 0;
}