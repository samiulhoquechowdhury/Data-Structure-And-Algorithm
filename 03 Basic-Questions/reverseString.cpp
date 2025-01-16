#include <iostream>
#include <cstring> // Corrected header for strlen()

using namespace std;

int main() {
    int i, j, length;
    char string[100]; 
    char reverse[100];

    cout << "Enter a string: ";
    cin >> string; // Use cin to take input

    length = strlen(string); // Get the length of the input string
    j = 0;

    // Loop to reverse the string
    for (i = length - 1; i >= 0; i--) {
        reverse[j] = string[i];
        j++;
    }
    reverse[j] = '\0'; // Null-terminate the reversed string

    cout << "Reversed string: " << reverse << endl;

    return 0;
}
