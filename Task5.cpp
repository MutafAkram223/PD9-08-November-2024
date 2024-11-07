#include<iostream>
#include<cmath>
using namespace std;
bool check(int size, string array[]);
main()
{
    int size = 4;
    string array[size];
    cout << "Enter the elements of array: " << endl;
    for (int i=0; i<size; i++)
    {
        cin >> array[i];
        }
    int result = check(size, array);
    if (result){
        cout << "True";
    }
    else {
        cout << "False";
    }
}
bool check(int size, string array[])
{
    for(int i=1; i<size; i++)
    {
        if (array[i]!=array[0])
        {
            return false;
        }
    }
    return true;
}