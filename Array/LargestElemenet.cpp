#include<iostream>
using namespace std;
int main(){
    int arr[]= {12,23,11,5,6,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0]; //assuming the first element is the largest element. 

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
         
    }
    
    cout<< "The largest number is : " << largest << endl;
    return 0;
}