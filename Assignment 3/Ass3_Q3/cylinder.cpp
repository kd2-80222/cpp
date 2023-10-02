#include "./cylinder.h"
using namespace std;

Cylinder::Cylinder(double radius,double height)
{
    this->radius=radius;
    this->height=height;
}
void Cylinder::accept()
{
    cout<<"Enter the radius: ";
    cin>>radius;
    cout<<"Enter the height: ";
    cin>>height;
}
void Cylinder::print()
{
    cout<<"Radius "<<radius<<endl;
    cout<<"Height "<<height<<endl;
}
void Cylinder::Volume()
{
    double volume=3.14*radius*radius*height;
    cout<<"Volume= "<<volume<<endl;
}
double Cylinder::getradius()
{
    return radius;
}
void Cylinder::setradius(double radius)
{
    this->radius=radius;
}
double Cylinder::getheight()
{
    return height;
}
void Cylinder::setheight(double radius)
{
    this->height=height;
}
double Cylinder::getvolume()
{
    return volume;
}
