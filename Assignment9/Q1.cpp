#include <iostream>
using namespace std;

void factorial( int number)
{   
    if(number <0)
    throw 1;

    int factorial=1;
    for (int i = 1; i <= number; ++i)
    {
        factorial  *= i;
    }

    cout<<"Factorial of "<<number<< "is :" <<factorial<<endl;
    
}

int main()
{   
    int number;
    cout<<"Enter number for calculating factorial :"<<endl;
    cin>>number;
    try
    {
        factorial(number);
    }
    catch(int error)
    {
        cout<<"Factorial is not possible"<<endl;
    }
    cout<<"Successful execution"<<endl;
    return 0;
}



