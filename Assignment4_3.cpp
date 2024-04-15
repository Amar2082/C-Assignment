/*1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.

1. Create a class Person with data members as name, age, city. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class. 

2. Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members. 
Also add the display function. Create Default and Parameterized
 constructors. Create the 
object of this class in main method and invoke all the methods in that class. 

3. Create a class Book with data members as bname,id,author,price. Write getters and setters for all the 
data members. Also add the display function. Create Default and Parameterized constructors. Create 
the object of this class in main method and invoke all the methods in that class. 

4. Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write 
getters and setters for all the data members. Also add the display function. Create the object of this 
class in main method and invoke all the methods in that class. 

5. Create a class ComplexNumber with data members real, imaginary. Create Default and Parameterized 
constructors. Write getters and setters for all the data members. Also add the display function. 
Create the object of this class in main method and invoke all the methods in that class.*/

#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
    private:

    int id;
    int salary;
    string name;

    public:

    Employee(int id,int salary,string name)
    {
        this->id = id;
        this->salary = salary;
        this->name = name;
    }

    void show()
    {
        cout<<"id : "<<id<<"salary : "<<salary<<"Name : "<<name<<endl;
    }

};

class Manager : public Employee
{
    public:

    int Deptid;
    int incentives;


    Manager(int id,int salary,string name,int Deptid,int incentives):Employee(id,salary,name)
    {
        this->Deptid = Deptid;
        this->incentives = incentives;
    }

    void CalculateSalary()
    {
        int sal = 0;
        sal = sal + this->incentives;
        cout<<"Manager salary : "<<sal<<endl;
    }
};

class Salesperson : public Employee
{
    public:

    int PA,FA;

    
    Salesperson(int id,int salary,string name,int PA,int FA):Employee(id,salary,name)
    {
        this->PA = PA;
        this->FA = FA;
    }

    void CalculateSalary()
    {
        int sal = 0;
        sal = sal + this->PA + this->FA;
        cout<<"Salesperson salary : "<<sal<<endl;
    }

};

int main()
{
    Manager mobj(7,60000,"xyz",0,10000);
    mobj.show();
    mobj.CalculateSalary();

    Salesperson sobj(9,50000,"ABC",1000,1000);
    sobj.show();
    sobj.CalculateSalary();

    return 0;
}