//single traversal approach.

#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

void findSecondLargest(int arr[], int n) {
    if (n < 2) {
        cout << "Array must have at least two elements!" << endl;
        return;
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            // Update secondLargest before updating largest
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            // Update secondLargest if it's less than arr[i] and not equal to largest
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No second largest element (all elements are the same)." << endl;
    } else {
        cout << "The second largest element is: " << secondLargest << endl;
    }
}

int main() {
    int arr[] = {10, 20, 5, 40, 40, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    findSecondLargest(arr, n);
    return 0;
}
