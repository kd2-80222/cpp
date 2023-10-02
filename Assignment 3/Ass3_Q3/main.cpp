/*Q3. Write a class to find volume of a Cylinder by using following members. (volume of
Cylinder=3.14 * radius * radius *height) (write a menu driven code for it and also use modular
approach)
Class having following member functions:
Cylinder()
Cylinder(double radius, double height)
getRadius()
setRadius()
getHeight()
setHeight()
getVolume()
printVolume()
Initialize members using constructor member initializer list.*/

#include "./cylinder.h"
#include "./menu.h"

int main()
{
    Cylinder C1(2, 3);
    Emenu choice;
    while ((choice = menu())!= 0)
    {
        switch (choice)
        {
        case Accept:
            C1.accept();
            break;
        case Print:
            C1.print(); 
            break;
        case Volume:
            C1.Volume();
            break;
        case Get_Radius:
            C1.getradius();
            cout << "Radius= " << C1.getradius() << endl;
            C1.setradius(80);
            break;
        case Get_Height:
            C1.getheight();
            cout << "Height= " << C1.getheight() << endl;
            C1.setheight(30);
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }
    cout << "Thank you!!!" << endl;
    return 0;
}