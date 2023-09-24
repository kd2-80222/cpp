/* Q1. Create a namespace NStudent. Create the Student class(created as per assignment-1 Q3) inside
namespace. Test the functionalities. */
#include <iostream>
using namespace std;

namespace Nstudent
{
    class Student
    {
        int roll_no;
        string name;
        float marks;

        public:
            Student(){}

            Student()
            {
                this->roll_no=0;
                this->name="";
                this->marks=0;
            }

    };
}
using namespace Nstudent;

int main()
{

    
    return 0;
}