#include<iostream>
#include<cmath>
using namespace std;
bool check(int size, int array[]);
main()
{
    int size;
    cout << "Enter the number of elements you want in array: ";
    cin >> size;
    int array[size];
    cout << "Enter the elements of array: " << endl;
    for (int i=0; i<size; i++)
    {
        cin >> array[i];
        }
    int result = check(size, array);
    if (result){
        cout << "Boom!";
    }
    else {
        cout << "There is no number 7 in array";
    }
}
bool check(int size, int array[])
{
    for(int i=0; i<size; i++)
    {
        int num = abs(array[i]);
        while (num > 0) {
        if (num % 10 == 7) {
            return true;
            break;
        }
        num /= 10;
        }
    }
    return false;
}