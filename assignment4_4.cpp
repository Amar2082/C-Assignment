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
    Employee(int id, int salary,string name)
    {
       this->id=id;
       this->salary=salary;
       this->name=name;
      
    }
    
    void show()
    {
        cout<<"id:"<<id<<"salary:"<<salary<<"name:"<<name<<endl;
    }


};

class Manager:public Employee
{
    public:
    int incentive;
    int DeptId;

    Manager(int id, int salary,string name,int incentive,int DeptId):Employee(id,salary,name)
    {
        this->incentive=incentive;
        this->DeptId=DeptId;

    }
    
    void calculate_salary()
    {
      int salary=0;
      salary=salary+incentive;

      cout<<" manager salary:"<<salary<<endl;
    }

    

};


int main()
{

    Manager mobj(4,300000,"ABC",20000,10);
    mobj.show();
    mobj.calculate_salary();

  return 0;
}