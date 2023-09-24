/* Write a class Address. Implement constructors, getters, setters, accept(), and display() methods.
Instead of char[] use string datatype */


#include<iostream>
using namespace std;

class Address
{
    private:
    string building;
    string street;
    string city;
    int pin;

    public:
    Address(){}
    Address(string building,string street,string city,int pin)
    {
        this->building=building;
        this->street=street;
        this->city=city;
        this->pin=pin;
    }
    void accept()
    {
       
        cout<<"Enter Building name : ";
        getchar();

        getline(cin,this->building);
        cout<<"Enter Street name : ";
        getline(cin,this->street);
        cout<<"Enter City name : ";
        getline(cin,city);
        cout<<"Enter Pin number : ";
        cin>>pin;
    }
    void display()
    {
        cout<<"Address is :"<<building<<","<<street<<","<<city<<","<<pin<<"."<<endl;
    }
    string get_building()
    {
        return this->building;
    }
    string get_street()
    {
        return  this->street;
    }
    string get_city()
    {
        return this->city;
    }
    int get_pin()
    {
        return this->pin;
    }
    void set_building(string building)
    {
        this->building=building;
    }
    void set_street(string street)
    {
        this->street=street;
    }
    void set_city(string city)
    {
        this->city=city;
    }
    void set_pin(int pin) 
    {
        this->pin=pin;
    }

};
int main()
{
    Address a1;
    //a.accept();
    //a.display();

    
    a1.display();
    a1.accept();
    a1.display();
    a1.get_building();
    a1.get_street();
    a1.get_city();
    a1.get_pin();

    a1.set_building("sunbeam");
    a1.display();
    a1.set_street("road");
    a1.display();
    a1.set_city("karad");
    a1.display();
    a1.set_pin(411500);
    a1.display();

    return 0;
}