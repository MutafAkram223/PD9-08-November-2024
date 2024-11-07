#include <iostream>
#include <string>
using namespace std;
void check(string pin, string moves[]);

int main()
{
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step","Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    string pin;
    cout << "Enter the four-digit PIN: ";
    cin >> pin;

    check(pin, moves);
}

void check(string pin, string moves[])
{
     int length = 0;
    while (pin[length] !='\0')
    {
        length = length + 1;
    }

    if (length != 4)
    {
        cout << "Invalid input.";
    }

    for (int i = 0; i < 4; i++)
    {
        if (pin[i] < '0' || pin[i] > '9')
        {
            cout << "Invalid input";
            return;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        int digit = pin[i];        
        int final = (digit + i) % 10;    
        cout << moves[final];
        if (i < 3)
            cout << ", ";
    }
}
