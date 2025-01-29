//cpp program to find the largest element in an array.

//Basic Approach


// #include <iostream>
// using namespace std;

// int findLargest(int arr[], int size) {
//     int largest = arr[0];
//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] > largest)
//         {
//             largest = arr[i];
//         }
        
//     }
//     return largest;
// }

// int main() {
//     int arr[] = {10,8,6,4,13,7};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     cout<< "The largest element in the array is : " << findLargest(arr, size) << endl;
//     return 0;
// }


//Using std::max_element (STL Approach)

// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {
//     int arr[] = {12,3,5,6,8,9};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int largest = *max_element(arr, arr + size);

//     cout<< "The largest element is : " << largest << endl;

//     return 0;
// }
