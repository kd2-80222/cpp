/*Q2. Implement following classes. Test all functionalities in main() of each created class. Note that
employee is inherited into manager and salesman.*/

#include <iostream>
using namespace std;
class Employee
{
private:
    int id;
    float sal;

public:
    Employee() : id(0), sal(0)
    {
    }
    Employee(int id, float sal) : id(id), sal(sal)
    {
    }
    int get_id()
    {
        return id;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    float get_sal()
    {
        return sal;
    }
    void set_sal(float sal)
    {
        this->sal = sal;
    }
    void accept()
    {
        cout << "Enter Employee Id: ";
        cin >> this->id;
        cout << "Enter Employee Salary: ";
        cin >> this->sal;
    }
    void display()
    {
        cout << "Employee Id is: " << id << endl;
        cout << "Employee Salary is: " << sal << endl;
    }
};
class Manager : virtual public Employee
{
private:
    float bonus;

public:
    Manager() : bonus(0)
    {
    }
    Manager(float bonus) : bonus(bonus)
    {
    }
    float get_bonus()
    {
        return bonus;
    }
    void set_bonus(float bonus)
    {
        this->bonus = bonus;
    }
    void accept()
    {
        Employee::accept();
    }
    void display()
    {
        Employee::display();
    }
protected:
    void acceptManager()
    {
        cout << "Enter Bonus: ";
        cin >> this->bonus;
    }
    void displayManager()
    {
        cout << "Bonus is: " << bonus << endl;
    }
};
class Salesman : virtual public Employee
{
private:
    float comm;

public:
    Salesman()
    {
        this->comm = 0;
    }
    Salesman(float comm)
    {
        this->comm = comm;
    }
    float getcomm()
    {
        return comm;
    }
    void setcomm(float comm)
    {
        this->comm = comm;
    }
    void accept()
    {
        Employee::accept();
    }
    void display()
    {
        Employee::display();
    }

protected:
    void acceptSalesman()
    {
        cout << "Enter Commission: ";
        cin >> this->comm;
    }
    void displaySalesman()
    {
        cout << "Commission is: " << comm << endl;
    }
};
class Sales_manager : public Manager, public Salesman
{
public:
    void acceptSales_manager()
    {
        Employee::accept();
        Manager::acceptManager();
        Salesman::acceptSalesman();
    }

    void displaySales_manager()
    {
        Employee::display();
        Salesman::displaySalesman();
        Manager::displayManager();
    }
};
int main()
{
    Sales_manager S1;
    S1.acceptSales_manager();
    S1.displaySales_manager();
    return 0;
}
