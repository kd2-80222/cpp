/*Q2. Stack is a Last-In-First-Out data structure. Write a Stack class. It implements stack using
Dynamically allocated array. Stack size should be passed in parameterized constructor. If size is not
given, allocate stack of size 5.
Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().*/

#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int max;

public:

    Stack(int size=5)
    {
        max=size;
        arr=new int[max];
        top=-1;
    }
    ~Stack()
    {
        delete[] arr;
    }
    int isEmpty()
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }

    int isFull()
    {
        if (top == (max - 1))
            return 1;
        else
            return 0;
    }

    int push(int n)
    {
        if (isFull())
        {
            return 0;
        }
        ++top;
        arr[top] = n;
        return n;
    }
    int pop()
    {

        int temp;
        if (isEmpty())
            return 0;
        temp = arr[top];
        --top;
        return temp;
    }
    int peek()
    {

        int temp;
        if (isEmpty())
            return 0;
        temp = arr[top];
        return temp;
    }

    void print()
    {
        int i;
        cout << "Stack is: ";
        for (i=0; i<=top;i++)
            cout << arr[i] << " ";
        cout << endl;
    };
};

int main()
{
    Stack S1(5);
    cout<<"Push the elements"<<endl;
    S1.push(1);
    S1.push(2);
    S1.push(3);
    S1.push(4);
    S1.push(5);
    S1.push(6);
    S1.print();
    int peek = S1.peek();
    cout << "Top element: " << peek <<endl;

    int pop = S1.pop();
    cout << "Popped element: " << pop <<endl;

    S1.print();
    return 0;
}

