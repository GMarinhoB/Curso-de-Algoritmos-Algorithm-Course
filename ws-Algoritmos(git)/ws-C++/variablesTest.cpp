//This program is only for training how to use the
//basics variables in c++ classes

#include <iostream>
#include <string>
//#include <iomanip>;

using namespace std;

int main()
{
    int age;
    float salary, height;
    char gender;
    string name;

    age = 25;
    salary = 2400.45;
    height = 1.82;
    gender = 'F';
    name = "Anna Carla Belmonte";

     cout << "Name: " << name << endl;
     cout << "Age: " << age << endl;
     cout << "Salary: " << salary << endl;
     cout << "Gender: " << gender << endl;
     cout << "Height: " << height << endl;

     return 0;
}