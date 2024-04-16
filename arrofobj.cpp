#include<iostream>
using namespace std;

class xyz
{
    private:
    int a,b;
    public:
    void getdata()
    {
        cout<<"Enter value of a and b"<<endl;
        cin>>a>>b;
    }
    void putdata()
    {
        cout<<"\t a = "<<a<<"\t b = "<<b;
    }
};

int main()
{
    xyz aa[5];
    int i;
    for(i=0;i<5;i++)
    aa[i].getdata();

    for ( i = 0; i < 5; i++)
    {
        aa[i].putdata();
    }
    
}