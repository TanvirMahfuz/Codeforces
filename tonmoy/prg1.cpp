#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    Person();
    
    Person(string name , int age)
    {
        this->name=name;
        this->age=age;
    }
     void set_Name(string name)
    {
        this->name=name;
    }
     void setAge(int age)
    {
        this->age=age;
    }
     string getName()
    {
     return name;
    }
    int getAge()
    {
        return age;
    }
};
class Doctor : public Person{
    private:
    string workingid;
     string specialization;
     double salary;
    public:
    Doctor():Person(){};
    Doctor(string name, int age, string workingid, string specialization,double salary):Person(name,age){
        this->workingid=workingid;
        this->specialization=specialization;
        this->salary=salary;
    }

    void setWorkingid(string workingid){
        this->workingid=workingid;
    }
    void setSpecialization(string specialization){
        this->specialization=specialization;
    }
    void setSalary(double salary){
        this->salary=salary;
    }
    string getWorkingId() 
    {return workingid;}
    string getSpecialization()
    {return specialization;}
    double getSalary()
    {return salary;}
    double calculate_Tax()
    {
        return salary*0.02;
    }
    void showInfo()
    {
        cout<<"Name: "<<getName()<<endl;
        cout<<"Age: "<<getAge()<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Yearly Tax: "<<calculate_Tax()<<endl;
        cout<<"Working id: "<<workingid<<endl;
        cout<<"Designation: "<<specialization<<endl;
    }

    
};
int main(){
Doctor d1 ("Devi Shetty", 45,"1101-1", "Executive Director", 45000);
d1.showInfo();
}