/* Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide necessary constructors. */
#include <iostream>
using namespace std;

class Box
{
    private:
        float length;
        float width;
        float height;
    public:
        Box(){}
        Box(float length, float width, float height)
        {
            
            this->length =length  ;
            this->width =width; 
            this->height=height;
        }
        void accept()
        {
            cout<<"Enter following values : "<<endl;
            cout<<"Length : ";
            cin>>length;
            cout<<"Width : ";
            cin>>width;
            cout<<"Height : ";
            cin>>height;
        }

        void Volume()
        {
           
            int volume = this->height*this->width*this->length;
            cout<<"Volume is : "<<volume<<endl;
        }

       


};

int main()
{
    Box b;
      
    int choice=1;

    do
    {
        cout<<"----------------------"<<endl;
        cout<<"1.Enter length-width-height : "<<"\n";
        cout<<"2.Display Volume : "<<"\n";
        cout<<"3.Exit "<<endl;
        cout<<"----------------------"<<endl;
        cout<<"Enter your choice"<<"\n";
        
        cin>>choice;
    switch (choice)
    {
    case 1 : b.accept();
       break;
    case 2 : b.Volume();
        break;
    case 3 : choice=0;
        cout<<"Exited"<<endl;
     break;
    
    }
        
    } while (choice != 0 );
    return 0;
}