#include<iostream>
using namespace std;
int check(string s1, string s2);
main()
{
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    int result = check(s1, s2);
    cout << "Number of matching letters are: " << result;
}
int check(string s1, string s2)
{
    int count;
    for(int i=0; s1[i]!='\0'; i++)
    {
        for(int j=0; s2[j]!=0; j++)
        {
            if (s1[i] == s2[j])
            count++;
        }
    }
    return count;
}