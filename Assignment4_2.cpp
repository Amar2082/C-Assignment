//Person and Student Inheritance:
// Model a system for handling individuals and students within an educational institution. 
//Create a base class Person with attributes like name and age. Derive a Student class with 
//additional attributes like student ID and GPA, inheriting the common attributes from the Person class.


#include<iostream>
#include<string.h>
using namespace std;

class Person
{
    public:
    string name;
    int age;

    Person(string name,int age)
    {
        this->name = name;
        this->age = age;
    }

    void Displayname()
    {
        cout<<name<<endl;
    }

    void Displayage()
    {
        cout<<age<<endl;
    }
};

class Student:public Person
{
    public:
    int studentid;
    int cgpa;

    Student(string name,int age,int studentid,int cgpa):Person(name,age)
    {
        this->studentid = studentid;
        this->cgpa = cgpa;
    }


    void Displayid()
    {
        cout<<studentid<<endl;
    }

    void Displaycgpa()
    {
        cout<<cgpa<<endl;
    }
};

int main()
{
    Student sobj("X",34,45,9);
    sobj.Displayname();
    sobj.Displayage();
    sobj.Displayid();
    sobj.Displaycgpa();

    return 0;
}