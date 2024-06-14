#include<iostream>
using namespace std;

//c++ classes
class Student{
    public:
    int id;  // Data types inside class is called data "members".
    float salary;
    string name;
};

//c++ object and class examples

int main(){
    Student s1;
    s1.id = 2000;
    s1.salary = 232000.32;
    s1.name = "Samiul";
    cout<<s1.id<<endl;
}