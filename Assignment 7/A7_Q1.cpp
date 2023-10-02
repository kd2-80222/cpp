#include <iostream>
using namespace std;

class Date
{
    private:
    int day;
    int month;
    int year;

    public:
    Date()
    {
        this->day=0;
        this->month=0;
        this->year=0;
    }
    Date(int day, int month, int year)
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
        cout<<"Enter Day : "<<endl;
        cin>>this->day;
        cout<<"Enter Month : "<<endl;
        cin>>this->month;
        cout<<"Enter Year : "<<endl;
        cin>>this->year;
    }
    void display()
    {
        cout<<"Date is : "<<this->day<<":"<<this->month<<":"<<this->year<<endl;
    }
    bool is_leap_year()
    {

    }

    friend class Person;

};

class Person
{
    private :
    string name;
    string addr;
    Date doj;

    public:
    Person()
    {
        this->name=" ";
        this->addr=" ";
       // date.Date();  // no need to writ this.
    }
    Person(string name, string addr, int day, int month, int year) : doj(day,month,year)
    {
        this->name=name;
        this->addr=addr;
        //this->doj.day=day;    // there is another way to do it
        
    }
    Person(string name, string addr,Date doj)
    {
        this->name=name;
        this->addr=addr;
    }
    string get_name()
    {
        return this->name;
    }
    void set_name(string)
    {
        this->name=name;
    }
    string get_addr()
    {
        return this->addr;
    }
    void set_addr(string)
    {
        this->name=addr;
    }
    Date get_dob()
    {
        return doj;
    }
    void set_dob(Date doj)
    {
        this->doj=doj;
    }

    void accept()
    {
        cout<<"Enter the person name : ";
        cin>>name;
        cout<<"Enter adderss : ";
        cin>>addr;
        doj.accept();
    }
    void display()
    {
        cout<<"Person Name : "<<name<<endl;
        cout<<"Person Address : "<<addr<<endl;
        cout<<"Biirth date : " <<endl;
        doj.display();
    }

};
class Employee : public Person
{
    private:
     int id;
     float sal;
     string dept;
     Date joining; 

    public:
        Employee()
        {
            this->id = 0;
            this->sal = 0;
            this->dept = "";
        }   
        Employee(string name,string addr,Date doj,int id,float sal,string dept,Date joining) : Person( name , addr , doj)
        {
            this->id = id;
            this->sal = sal;
            this->dept = dept;
        }
        int get_id()
        {
            return this->id;
        }
        void set_id(int)
        {
            this->id=id;
        }
        float get_sal()
        {
            return this->sal;
        }
        void set_sal(float)
        {
            this->sal=sal;
        }
        string get_dept()
        {
            return this->dept;
        }
        void set_dept(string)
        {
            this->dept=dept;
        }
        Date get_joining_date()
        {
            return joining;
        }
        void set_joining_date()
        {
            this->joining=joining;
        }
        void display()
        {       
        Person ::display();  
        cout << "Empid = " << this->id << endl;
        cout << "Salary = " << this->sal << endl;
        cout << "Department = " << this->dept << endl;
        cout << "Date of joining = ";
        this->joining.display();
        }
        void accept()
        {
        Person ::accept();
        cout << "Enter employee id = ";
        cin >> this->id;
        cout << "Enter salary = ";
        cin >> this->sal;
        cout << "Enter departmennt = ";
        cin >> this->dept;
        cout << "Enter Date Of joining = " << endl;
        joining.accept();
        }
};

int main()
{
   // Date d1(1,1,2023);
   // Date d2(2,2,2023);
    Employee e1; //("rohan", "Karad", d1,1,1000,"Marketing",d2);
    e1.accept();
    e1.display();
    return 0;
}


// string name,string addr,Date,int id,float sal,string dept,Date)