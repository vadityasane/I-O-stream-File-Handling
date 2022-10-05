#include <iostream>

using namespace std;

class Demo
{
    int *p;
public:
    Demo()
    {
        p= new int [15]; //array created in heap
        cout<<"Demo is Created"<<endl;
    }
    ~Demo()
    {
        delete []p; //we have to delete the memory created in heap manually
        cout<<"Demo is Destroyed"<<endl;
    }
};

void fun()
{
    //Demo d; //Object Delete Autometically

    Demo *ptr =  new Demo(); // we have to delete memory
    delete ptr;              // created in heap manually
}


int main()
{
    fun();

    return 0;
}
