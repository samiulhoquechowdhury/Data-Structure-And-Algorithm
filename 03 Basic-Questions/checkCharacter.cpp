//cpp program to check the character.
#include <iostream>
using namespace std;

int main(){

    char ch;
    cout<< "Enter a character :"<<endl;
    cin>> ch;

    //Alphabet checking condition

    if ((ch >= 'a' && ch <='z') || (ch >='A' && ch <= 'Z'))
    {
        cout<< ch << " is an Alphabet" << endl;
    } else if(ch  > '0' && ch <= '9'){
        cout<< ch << " is a Digit" << endl;
    } else {
        cout<< ch << " is a special character" << endl;
    }
    

    return 0;
}