/*
 Write a C++ program to compute the sum of two given integer values. If the two values are the same, then return triple their sum.
Sample Input
1, 2
3, 2
2, 2
Sample Output:
3
5
12
*/

#include <iostream>
using namespace std;
int test(int x, int y)
{
    return x == y ? (x + y) * 3 : x + y;
}

int main()
{
    cout << test(3, 6) << endl; // 9
    cout << test(3, 3) << endl; // 18
    cout << test(3, 9) << endl; // 12
    return 0;
}