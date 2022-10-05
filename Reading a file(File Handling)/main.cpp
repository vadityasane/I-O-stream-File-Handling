#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream ifs;
    ifs.open("my.txt");

   // if(ifs.is_open())cout("File is Opened");


    string name;
    int roll;
    string bye;

    ifs>>name>>roll;

    ifs.close();

    cout<<"Name: "<<name<<endl;
    cout<<"Roll: "<<roll<<endl;
    cout<<"greeting: "<<bye<<endl;

}
