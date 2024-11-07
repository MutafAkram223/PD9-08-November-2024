#include <iostream>
using namespace std;
bool calculations(string word, int length);
main()
{
    string word;
    cout << "Enter a word: ";
    cin >> word;
    int length = 0;
    for (int i=0; word[i] != '\0'; i++ )
    {
        length++;
    }
    int result = calculations(word, length);
    if (result)
    {cout << "True";}
    else {
        cout << "False";
    }


}
bool calculations(string word, int length)
{
    if (length % 2 ==0)
    {
        return true;
    }
    else {
        return false;
    }
}