#include<iostream>
using namespace std;

class date
{
    private : 
        int day;
        int month;
        int year;
    public : 
        date()
        {
            this->day=0;
            this->month=0;
            this->year=0;
        }

        date(int day, int month, int year)
        {
            this->day=day;
            this->month=month;
            this->year=year;
        }
        
        int get_day()
        {
            return this->day;
        }
        void set_day(int day)
        {
            this->day=day;

        }
        int get_month()
        {
            return this->month;
        }
        void set_month(int month)
        {
            this->month=month;

        }
        int get_year()
        {
            return this->year;
        }
        void set_year(int year)
        {
            this->year=year;

        }

        void accept()
        {
            cout<<"Enter Day : ";
            cin>>this->day;
            cout<<"Enter Month : ";
            cin>>this->month;
            cout<<"Enter Year : ";
            cin>>this->year;
        }

        void display()
        {
            cout<<"Date is : "<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
        }

        bool is_leap_year()
        {
            if ((this->year % 4 == 0 and this->year % 400 == 0) || (this->year % 4 == 0 and this->year % 100 != 0))
                return true;
            else
                return false;
        }

};

class Person
{
    private:
    string name;
    string addr;
    date birth_date;
   
    public:
    Person()
    {
        this->name=" ";
        this->addr=" ";
    }
    Person(string name,string addr,int day,int month,int year):birth_date(day,month,year)
    {
        this->name=name;
        this->addr=addr;
    }
    string get_name()
    {
        return name;
    }
    void set_name(string name)
    {
        this->name=name;
    }
    string get_addr()
    {
        return addr;
    }
    void set_addr(string addr)
    {
        this->addr=addr;
    }
    date get_birth_date()
    {
        return birth_date;
    }
    void set_birth_date(date bith_date)
    {
        this->birth_date=birth_date;
    }
    void acceptPerson()
    {
        cout<<"Enter name=";
        cin>>this->name;
        cout<<"Enter addr=";
        cin>>this->addr;
        cout<<"Enter date of birth=";
        birth_date.accept();
    }
    void displayPerson()
    {
        cout<<"NAME ="<<name<<endl;
        cout<<"ADDR ="<<addr<<endl;
        cout<<"Date of birth="<<endl;
        birth_date.display();
    }
};
class Employee
{
    private:
    int id;
    float sal;
    string dept;
    date joining;

    public:
    Employee()
    {
        this->id=0;
        this->sal=0;
        this->dept= " ";
    }
    Employee(int id,float sal,string dept,int day,int month,int year):joining(day,month,year)
    {
        this->id=id;
        this->sal=sal;
        this->dept=dept;
    }
       int get_id()
    {
        return id;
    }
    void set_id(int id)
    {
        this->id=id;
    }
    int get_sal()
    {
        return sal;
    }
    void set_sal(float sal)
    {
        this->sal=sal;
    }
    string get_dept()
    {
        return dept;
    }
    void set_dept(string dept)
    {
        this->dept=dept;
    }
    date get_doj()
    {
        return joining;
    }
    void set_doj(date doj)
    {
        this->joining=doj;
    }
    void acceptEmployee()
    {
        cout<<"Enter id =";
        cin>>this->id;
        cout<<"Entyer sal=";
        cin>>this->sal;
        cout<<"Enter dept=";
        cin>>this->dept;
        cout<<"Enter date of joining=";
        joining.accept();
    }
    void displayEmployee()
    {
        cout<<"ID="<<id<<endl;
        cout<<"SAL="<<sal<<endl;
        cout<<"DEPT="<<dept<<endl;
        cout<<"Date of joining="<<endl;
        joining.display();
    }
};

int main()
{
    date d;
    d.accept();
    d.display();
    int day;
    cout<<"Enter the day you want to give";
    cin>>  day;
    d.set_day( day);
    d.display();

    Employee e;
    e.acceptEmployee();
    e.displayEmployee();
    Person p;
    p.acceptPerson();
    p.displayPerson();
    

    return 0;
}