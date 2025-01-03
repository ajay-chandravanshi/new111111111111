#include <iostream>
#include <string>

using namespace std;

void alphabet(string &str) 
{
    for (int i = 0; i < str.length(); i++) 
    {
        int asciiValue = (int)str[i];

        if (asciiValue >= 65 && asciiValue <= 90) {
            str[i] = (char)(asciiValue + 32);
        }

        else if (asciiValue >= 97 && asciiValue <= 122) {
            str[i] = (char)(asciiValue - 32);
        }
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin>>input;

    alphabet(input);

    cout << "Converted string: " << input << endl;

}