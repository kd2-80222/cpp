#include<iostream>
using namespace std;

class employee
{
    private : 
        int id;
        float sal;
    public :
        employee(){}
        employee(int id,float sal){}
        int get_id(){}
        void set_id(int id){}
        float get_sal(){}
        void set_sal(float sal){}
        void accept(){}
        void display(){}
};

class manager : employee
{
    private : 
        float bonus;
    public:
        manager(){}
        manager(int,float,float){}
        float get_bonus(){}
        void set_bonus(float){}
        void display(){}
        void accept(){}
        void display_manager(){}
        void accept_manager(){}
};

class salesman : employee
{
    private : 
        float comm;
    public : 
        salesman(){}
        salesman(int,float,float){}
        float get_comm(){}
        void set_comm(float){}
        void display(){}
        void accept(){}
        void display_salesman(){}
        void accept_salesman(){}
};

class sales_manager : manager,salesman
{
    public:
    sales_manager(){}
    sales_manager(int,float,float,float){}
    void display(){}
    void accept(){}
};

int main()
{
    return 0;
}