/*Q1. Write a menu driven program for Student management.
In main(), create Array of Objects and provide facility for accept, print, search and sort.
For student accept name, gender, rollNumber and marks of three subjects from user and print name,
rollNumber, gender and percentage.
Provide global functions void sortRecords(Studuent[] arr) and int searchRecords(Student[] arr) for
sorting and searching array.
Search function returns index of found Student, otherwise returns -1.*/

#include<iostream>
using namespace std;

class Student
{
    private:
        string name;
        string gender;
        int rollno;
        double marks[3];
        
    
    public:
        Student(){
            
        }
        void accept()
        {

            cout<<"Enter the following details for the sutdents : "<<endl;
           
            cout<<"Name : ";
            cin>>this->name;
            cout<<"Gender : ";
            cin>>this->gender;
            cout<<"Rollno : ";
            cin>>this->rollno;
            cout<<"Marks of students : "<<endl;
            for(int i=0;i<3;i++)
            {
                cout<<"Enter marks of subject "<<i<<": ";
                cin>>marks[i];
            }
            
        }
        void display()
        {
            cout<<"*********************"<<endl;
            cout<<"Roll Number : "<<this->rollno<<endl;
            cout<<"Student Name : "<<this->name<<endl;
            cout<<"Student Gender : "<<this->gender<<endl;
            for(int i=0;i<3;i++)
            cout << "Marks of suject " << i << ": " << marks[i] << endl;
            cout<<"*********************"<<endl;

        }

        friend int searchRecords(Student arr[], int size, int Snum);
        
        
};

// void sortRecorde(Student[] arr)
// {

// }
int searchRecords(Student arr[],int Size, int snum)
{
    for(int i=0; i< Size; i++)
    {
        if(arr[i].rollno == snum)
        {
            return 1;
        }
    }
    return -1;
}
int main()
{
    int Size;
    cout<<"How many Student's details you want to insert?";
    cin>>Size;
    
    
    Student arr[Size];
    //cout<<"arrsize"<<arrSize<<endl;
    
    int choice=1;
    while(1)
    {
        cout<<"******* Menu *******"<<endl;
        cout<<"1.Accept Students details"<<endl;
        cout<<"2.Display Students details"<<endl;
        cout<<"3.Search student"<<endl;
        //cout<<"4.Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        int snum;
        switch (choice)
        {
        case 1 : for (int i = 0; i < Size ; i++)
                {
                    arr[i].accept();
                }
            break;
        case 2 : for (int i = 0; i < Size ; i++)
                {
                    arr[i].display();
                }
            break;
        case 3 : {cout<<"Enter the rollno of student you want to search : ";
                    cin>> snum;
                int FI = searchRecords(arr, Size, snum);
                if(FI != -1)
                    {
                        cout<<"Student found in records."<<endl;
                        arr[FI].display();
                    }
                else
                    cout <<"Student not found in records."<<endl;
                 }
            break; 
        default:
            exit(1);
        }
    } 
    
    
    return 0;
}


//hierarchy
//association 
//inheritance
//isarelationship
