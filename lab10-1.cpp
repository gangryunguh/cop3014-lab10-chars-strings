//
//
//
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char input;

    cout << "Please Enter Any Character:" << endl;
    cin >> input;
    cout << "The character entered is " << input << endl << endl;
    cout << "The ASCII code for " << input << " is " << int(input)
         << endl;

    if (isalpha(input)) // tests to see if character is a letter
    {
        cout << "The character is a letter" << endl;
        if (islower(input)) // tests to see if letter is lower case
            cout << "The letter is lower case" << endl;
        if (isupper(input)) // tests to see if letter is upper case
            cout << "The letter is upper case" << endl;
    }
    else if (isdigit(input)) // tests to see if character is a digit
        cout << "The character you entered is a digit" << endl;
    else
        cout << "The character entered is not a letter nor a digit"
             << endl;
    return 0;
}