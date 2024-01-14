#include<iostream>
using namespace std;
class Animal{
    private:
    string name;
    int age;
    public:
    void setName(string s){name=s;}
    void setAge(int a){age=a;}

    string getName(){return name;}
    int getAge(){return age;}

};
class Zebra: public Animal{
    private:
    string place_of_origin;
    public:
    Zebra(string place, Animal ob)
    {
        place_of_origin=place;
        cout<<"If "<<getName()<<" was a Zebra: "<<endl;
        cout<<" name of the Zebra: "<<ob.getName()<<endl;
        cout<<" age of the Zebra: "<<ob.getAge()<<endl;
        cout<<" place of Origin: "<< place_of_origin <<endl;
        cout<<endl;

    }

};
class Dolphin: public Animal{
    private:
    string place_of_origin;
    public:
    Dolphin(string place,Animal ob)
    {
        place_of_origin=place;
        cout<<"If "<<getName()<<" was a Dolphine: "<<endl;
        cout<<" name of the Dolphin: "<<ob.getName()<<endl;
        cout<<" age of the Dophin: "<<ob.getAge()<<endl;
        cout<<" place of Origin: "<< place_of_origin <<endl;
        cout<<endl;
    }
};
int main()
{
    Animal ob;
    ob.setName("Jack");
    ob.setAge(29);

    Zebra z("Africa",ob);
    Dolphin d("North America",ob);

}