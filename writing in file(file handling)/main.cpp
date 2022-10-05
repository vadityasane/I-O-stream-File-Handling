#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream ofs("my.txt",ios::trunc);
    ofs<<"Alexander"<<endl;
    ofs<<256<<endl;
    ofs<<"TATA BYE"<<endl;

    ofs.clear();



    return 0;
}
