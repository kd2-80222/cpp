#include <iostream>
using namespace std;

class Product
{
    private:
        int id;
        string title;
        double price;
        char type;

    public:
    Product()
    {
        this->id =0;
        this->title= " ";
        this->price=0;
        this->type=' ' ;
    }
    Product (int, string, double, char)
    {
        this->id =id;
        this->title=title;
        this->price=price;
        this->type=type ;
    }

    virtual void accept()
    {
        cout<<"Enter ID :";
        cin>>this->id;
        cout<<"Enter Title : ";
        cin>>this->title;
        cout<<"Enter Price : ";
        cin>>this->price;
        cout<<"Enter Product Type ('B' or 'T'): ";
        cin>>this->type;
    }
    virtual void display()
    {
        cout<<"ID :"<<this->id<<endl;
        cout<<"Title : "<<this->title<<endl;
        cout<<"Price : "<<this->price<<endl;
        cout<<"Type : "<<this->type<<endl;
    }

    friend void calculate_bill(Product *arr[3],int index);

};

class Book : public Product
{
    private:
        string author;
    public:
        Book()
        {
            this->author=author;
        }
        Book(string author)
        {
            this->author=author;
        }
        void accept()
        {
            Product::accept();
            cout<<"Enter the author** name : ";
            cin>>this->author;
        }
        void display()
        {
            Product::display();
            cout<<"Author : "<<this->author<<endl;
        }
    
};

class Tape : public Product
{
    private:
        string artist;
    public : 
        Tape()
        {
            this->artist=artist;
        }
        Tape(string author)
        {
            this->artist=artist;
        }
        void accept()
        {
            Product::accept();
            cout<<"Enter the artist name : ";
            cin>>this->artist;
        }
        void display()
        {
            Product::display();
            cout<<"Artist : "<<this->artist<<endl;
        }

};
void calculate_bill(Product *arr[],int index)
{
    float total_price = 0;

    for (int i = 0; i < index; i++)
    {
        if (arr[i]->type == 'B')
        {

            float discount = arr[i]->price * 0.1;
            arr[i]->price = arr[i]->price - discount;
            total_price = arr[i]->price + total_price;
        }
        else
        {
            float discount = arr[i]->price * 0.05;
            arr[i]->price = arr[i]->price - discount;
            total_price = arr[i]->price + total_price;
        }
    }
    cout << "TOTAL PRICE = " << total_price << endl;


}
int menu()
{
    int choice;
    cout << "--------------------" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Add Tape " << endl;
    cout << "3. Generate Bill" << endl;
    cout << "4. Display Products" << endl;
    cout << "Enter Your Chocie = ";
    cin >> choice;
    cout << "--------------------" << endl;
    return choice;
}
int main()
{
    int choice;
    Product *arr[3];
    int index = 0;

    while(((choice=menu()) != 0))
    {
        switch (choice)
        {
        case 1:
        if (index < 3)
        {
            arr[index] = new Book();
            arr[index] -> accept();
            index++;
        }
        else 
            cout<<"Array is full , can not insert another producets.";
            break;
        case 2:
        if (index < 3)
        {
            arr[index] = new Tape();
            arr[index] -> accept();
            index++;
        }
        else 
            cout<<"Array is full , can not insert another producets.";
            break;
        case 3: calculate_bill(arr,3);
                break;
        
        case 4: for (int i = 0; i < index; i++)
            {
                arr[i]->display();
            }
        default:
            break;
        }
    }
    for (int i = 0; i < index; i++)
    {
        delete arr[i];
    }
    cout << "THANK YOU FOR SHOPPING........" << endl;
    return 0;
}



//cout<<"Books Details : "<<endl;
            // for(int i=0;i<3;i++)
            // {
            //     if (arr[i]->type='B')
            //     {arr[i]->display();}
            // }