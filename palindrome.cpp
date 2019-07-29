//
//  Palindrome is a word, phrase, or sequence that reads the same backward as forward,
//  e.g., "madam" or "nurses run".
//
//  Implement a program that determines whether a C-string you read from the keyboard
//  is a palindrome or not.

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
    char line[51];
    int length, count = 0;

    cout << "Enter a string of no more than 50 characters" << endl;
    // add your code below:
    cin.get(line, 51);

    length = strlen(line);
    int left = 0;
    int right = length-1;
    while (left < right) {
        if (tolower(line[left]) == tolower(line[right])) {
            left++;
            right--;
        }
        else if (iswspace(line[left]))
            left++;
        else if (iswspace(line[right]))
            right--;
        else {
            cout << line << " is not a palindrome" << endl;
            break;
        }
    }

    if (left >= right)
        cout << "\"" << line << "\"" << " is a palindrome!" << endl;

    return 0;
}
