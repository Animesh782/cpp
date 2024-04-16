#include<iostream>
using namespace std;
class calculator{
    float a,b;

public:
    void result()
    {
        cout<<"Enter first number"<<endl;
        cin>>a;
        cout<<"Enter second number"<<endl;
        cin>>b;
    }
    float add()
    {
        return a+b;
    }
    float sub()
    {
        return a-b;
    }
    float multiply()
    {
        return a*b;
    }
    float div()
    {
        return a/b;
    }

};

int main()
{
    int ch;
    calculator c;
    cout<<"Enter 1 to Add"<<"\nEnter 2 to Subtract"<<"\nEnter 3 to Multiply"<<"\nEnter 4 to Divide"<<"\nEnter 5 to exit";

    do
    {
        cout<<"Enter Choice";
        cin>>ch;
        switch (ch)
        {

        case 1:
            c.result();
            cout<<"Result"<<c.add()<<endl;
            break;

        case 2:
            c.result();
            cout<<"Result"<<c.sub()<<endl;
            break;

        case 3:
            c.result();
            cout<<"Result"<<c.multiply()<<endl;
            break;

        case 4:
            c.result();
            cout<<"Result"<<c.div()<<endl;
            break;

        }
    } while (ch>=1 && ch<=5);
    return 0;
    
}