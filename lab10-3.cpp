#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char line[50];
    int length,count = 0;

    cout << "Enter a sentence of no more than 49 characters:\n";
    cin.getline(line,50);
    length = strlen(line); // strlen returns the length of the
                           // string currently stored in line
                           // strlen *doesn't* count the '\0' as
                           // the length of the string
    cout << "The sentence entered read backwards is:\n";
    for(count = length-1; count >= 0; count--)
    {
        cout << line[count];
    }
    cout << endl;
    return 0;
}