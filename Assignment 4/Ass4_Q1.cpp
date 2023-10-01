/*Q1. Write a class for Time and provide the functionality
Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()
In main create array of objects of Time.
Allocate the memory for the array and the object dynamically.*/
#include <iostream>
using namespace std;

class Time
{
    private: 
        int h;
        int m;
        int s;
    public:
        Time(){}
        Time(int h,int m, int s)
        {
            this->h=h;
            this->m=m;
            this->s=s;
        }
        void getHour()
        {
            cout<<"Enter Hour : "<<endl;
            cin>>this->h;
        }
        void getMinute()
        {
            cout<<"Enter Minute : "<<endl;
            cin>>this->m;
        }
        void getSeconds()
        {
            cout<<"Enter Seconds : "<<endl;
            cin>>this->s;
        }
        void printTime()
        {
            cout<<"Time is : "<<this->h<<":"<<this->m<<":"<<this->s<<endl;
        }
        int setHour(int h)
        {
            this->h=h;
            return h;
        }
        int setMinute(int m)
        {
            this->m=m;
            return m;
        }
        int setSeconds(int s)
        {
            this->s=s;
            return s;
        }

};

int main()
{
    // Time *arr[5]; // dynamic objects

    // 1. Array of pointers is dynamic. // array of objects is dynamic.
    Time **arr = new Time *[5]; 

    // 2. Dynamic memory allocation for objects.
    for(int i=0; i<5; i++)
    {
        arr[i]= new Time();
    }
 
    // 3. Accepting h,m,s.
    for (int i=0;i<5;i++)
    {
        cout<<"Enter following values : "<<endl;
        arr[i]->getHour();
        arr[i]->getMinute();
        arr[i]->getSeconds();
        
    }

    // 4. Displaying Time
    for (int i = 0; i < 5; i++)
    {
        arr[i]->printTime();
    }
    


    // Deallocating the objects memory.
    for (int i = 0; i < 5; i++)
    {
        delete arr[i];
    }
    delete[] arr;
    return 0;
}