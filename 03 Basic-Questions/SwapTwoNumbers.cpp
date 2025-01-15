//Swapping of two numbers using third variable.
#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int y = 6;
    int temp;

    cout << "Before Swapping." << endl;    
    cout << "X = "<<x<<" and Y = "<< y << endl;
    temp = x;
    x = y;
    y = temp;

    cout<< "After Swapping."<< endl;

    cout<<"X = " << x << " and Y = " << y <<endl;

    return 0;
}