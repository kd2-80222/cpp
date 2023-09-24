/************************ ASSIGNMENT 3 QUESTION 2 *********************************/

// Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
// Mostly they do, but sometimes a car goes by without paying.
// The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
// collected. Model this tollbooth with a class called tollbooth.
// The two data items are a type unsigned int to hold the total number of cars, and a type double to
// hold the total amount of money collected.
// A constructor initializes all data members to 0. A member function called payingCar() increments
// the car total and adds 0.50 to the cash total. An other function, called nopayCar()
// increments the car total but adds nothing to the cash total. Finally, a member function called
// printOnConsole() displays the two totals and number of paying as well as non paying cars total.
// ( write a menu driven code for it)

#include <iostream>
using namespace std;

class toolbooth
{
private:
    unsigned int payingcars;
    unsigned int nopayingcars;
    double amount;
public:
    toolbooth()
    {
        this->payingcars=0;
        this->nopayingcars=0;
        this->amount=0;
    }

    void payingCar()
    {
        payingcars=payingcars+1;
        amount=amount+0.50;
    }
    void nopayCar()
    {
        nopayingcars=nopayingcars+1;
        // amount=amount+0;
    }
    void printOnConsole()
    {
        cout<<"Total cars passing : "<<payingcars+nopayingcars<<endl;
        cout<<"Total amount collected : "<<amount<<endl;
        cout<<"Total paying cars : "<<payingcars<<endl;
        cout<<"Total non-paying cars : "<<nopayingcars<<endl; 
    }

   
};

int menu()
{
    int choice;
    cout<<"Menu"<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"1.Pay toll"<<endl;
    cout<<"2.No toll"<<endl;
    cout<<"3.Display Details"<<endl;
    
    cout<<"Enter choice"<<endl;
    cin>>choice;

    return choice;
}

int main()
{
    int choice=1;
    toolbooth t1;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1 : t1.payingCar();
            cout<<"-->Toll paid."<<endl;
            break;
        case 2 : t1.nopayCar();
            cout<<"-->No Toll paid."<<endl;
            break;
        case 3 : t1.printOnConsole();
            break;
        
        default : cout<<"Wrong choice entered."<<endl;
            break;
        }
    }
    cout<<"Thank-you for using toll app."<<endl;
    


    return 0;
}



