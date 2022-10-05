#include <iostream>
#include<fstream>

using namespace std;

class Student
{
  public:
      string name;
      int roll;
      string branch;
      friend ofstream & operator<<(ofstream &ofs, Student &s);
      friend ifstream & operator>>(ifstream &ifs, Student &s);
};
ifstream & operator>>(ifstream &ifs, Student &s)
{
    ifs>>s.name>>s.roll>>s.branch;
    return ifs;
}

ofstream & operator<<(ofstream &ofs, Student &s)
{
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}

int main()
{
    Student s;
    s.name="Alex";s.roll=45;s.branch="CSE";

    ofstream ofs("Student.txt",ios::trunc);
    /*ofs<<s1.name<<endl;
    ofs<<s1.roll<<endl;
    ofs<<s1.branch<<endl;*/    //no need to write this as we do operator overload

    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll: "<<s.roll<<endl;
    cout<<"Branch: "<<s.branch<<endl;

    ofs<<s;      //write this instead of above three
    ofs.close();

    return 0;
}
