/**
 *           *****
 *           *****
 *           *****
 *           *****
 *           *****
 *
 *    Print this pattern
 *
 *   The outer loop, counts the lines or rows  -----> *****
 *   The outer loop, counts the lines or rows  -----> *****
 *   The outer loop, counts the lines or rows  -----> *****
 *   The outer loop, counts the lines or rows  -----> *****
 *
 *   The inner loop focus on the cols
 */

#include <iostream>
using namespace std;

int main()
{
    cout << "Pattern Printing." << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << " *";
        }
        cout << endl;
    }

    return 0;
}