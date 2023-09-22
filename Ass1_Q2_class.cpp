#include <iostream>
using namespace std;

class Date
{
   

    public:
    
    int day;
    int month;
    int year;

   void initDate()
   {
    this->day=13;
    this->month=03;
    this->year=1998;
   }

   void PrintDateOnConsole()
   {
    cout<<"The Date : "<<this->day<<":"<<this->month<<":"<<this->year<<"\n"<<"\n";
   }

   void acceptDateFromConsole()
   {
    cout<<"Enter the Date : "<<"\n";
    cin>>this->day;
    cout<<"Enter the Month : "<<"\n";
    cin>>this->month;
    cout<<"Enter the Year : "<<"\n";
    cin>>this->year;
   }
   bool isLeapYear()
    {
        if(((year % 4 == 0) && ( this->year % 100 != 0)) || (year % 400 == 0))
            return true;
        else
            return false;
    }

};


int main()
{
    Date d;
    int choice=1;

    do
    {
        cout<<"1.Enter Date : "<<"\n";
        cout<<"2.Show Date : "<<"\n";
        cout<<"3.Is Lear Year : "<<"\n";
        cout<<"4.Initial Date : "<<"\n";
        cout<<"5.Exit"<<"\n";
        cout<<"Enter your choice"<<"\n";
        cin>>choice;
    switch (choice)
    {
    case 1 : d.acceptDateFromConsole();
       break;
    case 2 : d.PrintDateOnConsole();
        break;
    case 3 :    cout<<d.year<<"\t";
             if(d.isLeapYear())
                cout<<"Year is Leap Year."<<"\n";
            else
                cout<<"Year is not Leap Year."<<"\n";
        break;
    case 4 : d.initDate();
            d.PrintDateOnConsole();
        break;
    case 5 : choice=0;
     break;
    
    
    }
        
    } while (choice != 0 );
    
    
    return 0;
}

