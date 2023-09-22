#include <iostream>
using namespace std;

struct Date
{
    public:
    
    int day;
    int month;
    int year;
};
   void initDate(Date d)
   {
    d.day=13;
    d.month=03;
    d.year=1998;
   }

   void PrintDateOnConsole(Date d)
   {
    cout<<"The Date : "<<d.day<<":"<<d.month<<":"<<d.year<<"\n"<<"\n";
   }

   void acceptDateFromConsole(Date d)
   {
    cout<<"Enter the Date : "<<"\n";
    cin>>d.day;
    cout<<"Enter the Month : "<<"\n";
    cin>>d.month;
    cout<<"Enter the Year : "<<"\n";
    cin>>d.year;
   }
   bool isLeapYear(Date d)
    {
        if(((d.year % 4 == 0) && ( d.year % 100 != 0)) || (d.year % 400 == 0))
            return true;
        else
            return false;
    }



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
    case 1 : acceptDateFromConsole(d);
       break;
    case 2 : PrintDateOnConsole(d);
        break;
    case 3 :    cout<<d.year<<"\t";
             if(isLeapYear(d))
                cout<<"Year is Leap Year."<<"\n";
            else
                cout<<"Year is not Leap Year."<<"\n";
        break;
    case 4 : initDate(d);
            PrintDateOnConsole(d);
        break;
    case 5 : choice=0;
     break;
    
    
    }
        
    } while (choice != 0 );
    
    
    return 0;
}

