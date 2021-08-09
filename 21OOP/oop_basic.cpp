#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class student
{ // by default c++ data members or attributes are private members which can be used only inside of the class.
    string name;

public:
    int age;
    bool gender;
    student()
    {
        cout << "default constructor" << endl; //default constructor
    }
    student(string s, int a, int g)
    { //parameterized constructor
        cout << "parameterized constructor" << endl;
        name = s;
        age = a;
        gender = g;
    }

    student(student &a)
    {                                       //copy constructor
        cout << "Copy constructor" << endl; //when you copy without specifying the varibales to where to point then it'll only
                                            // copy the variables but not where to point they'll point to.. i.e it only returns the
                                            //variable names.. and it doesnot return the pointed values.
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student()
    {
        //destructor - used to destroy the objects created
        cout << "Destructor called" << endl;
    }

    void setName(string s)
    {
        name = s;
    }
    void getName()
    {
        cout << name;
    }
    void printInfo()
    {
        cout << "Name = ";
        cout << name << endl;
        cout << "Age = ";
        cout << age << endl;
        cout << "Gender = ";
        cout << gender << endl;
    }
    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    student a("Akash", 20, 1);
    a.printInfo();
    student b = a;
    b.printInfo();
    // student b;

    // student c(a);
    // student d = a;
    // d.printInfo();
    // if (c == a)
    // {
    //     cout << "Same" << endl;
    // }
    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     // cout << "Name = ";
    //     // cin >> arr[i].name;
    //     cout << "Age = ";
    //     cin >> arr[i].age;
    //     cout << "Gender = ";
    //     cin >> arr[i].gender;
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printInfo();
    // }

    return 0;
}