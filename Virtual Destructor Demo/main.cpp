#include <iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"Base Constructed"<<endl;
    }
    virtual ~Base() // now Derived Destroyed first
    {
        cout<<"Base Destroyed"<<endl;
    }
};

class Derived:public Base
{
public:
    Derived()
    {
        cout<<"Derived Constructed"<<endl;
    }
    ~Derived()
    {
        cout<<"Derived Destroyed"<<endl;
    }

};

void fun()
{
    //Derived d; //Delete sequentially

    Base *p = new Derived();  //Use Virtual before ~base so it delete correctly
    delete p;
}

int main()
{
    fun();

    return 0;
}
