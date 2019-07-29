
#include <fstream>
#include <iostream>

using namespace std;
const int MAXNAME = 15;

int main()
{
    ifstream inData;
    inData.open("payRoll.dat");
    char name[MAXNAME+1];
    int hoursWorked;
    float payRate;

    inData.get(name,MAXNAME+1); // prime the read
    while (inData)
    {
        inData >> hoursWorked;
        inData >> payRate;

        cout << name << endl;
        cout << "Hours Worked " << hoursWorked << endl;
        cout << "Pay Rate " << payRate << " per hour"
             << endl << endl;

        inData.ignore(80,'\n');
        // This will ignore up to 80 characters but will
        // stop (ignoring) when it reads the \n which is
        // consumed.

        inData.get(name,MAXNAME+1);
    }
    return 0;
}
