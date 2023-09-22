#include <iostream>
using namespace std;

class student
{

    int roll_no;
    string name;
    float marks;

public :

    void initstudent()
    {
        this->roll_no=1;
        this->name="om";
        this->marks=100;        
    }
    void printstudentonconsole()
    {
        cout<<"Student"<<"\n";
        cout<<"Roll No : "<<this->roll_no<<"\n";
        cout<<"Name : "<<this->name<<"\n";
        cout<<"Marks : "<<this->marks<<"\n";
        


    }
    void acceptstudentfromconsole()
    {
        cout<<"Enter the Roll no of student : ";
        cin>>this->roll_no;
        cout<<"Enter the Name of student : ";
        cin>>this->name;
        cout<<"Enter Marks of student :";
        cin>>this->marks;

    }

};

int main()
{
    int choice=1;
    student s;
   
   
 
  do{
     cout<<"1. Enter new student"<<"\n";
  cout<<"2. Show student"<<"\n";
  cout<<"3. Exit"<<"\n";
  cout<<"Enter your choice : ";
  cin>> choice;
  switch (choice)
  {
    case 1: s.acceptstudentfromconsole();
    break;
    case 2 : s.printstudentonconsole();
    break;
    case 3 :choice=0;
    break;
  
    default:
      s.initstudent();
      s.printstudentonconsole();
    break;
  }
   } while(choice !=0);
  
   return 0;
}
