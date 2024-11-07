#include<iostream>
#include<cmath>
using namespace std;
int check(int size, string array[]);
main()
{
    int size;
    cout << "Enter the number of elements you want to add in array: ";
    cin >> size;
    string array[size];
    cout << "Enter the elements of array: " << endl;
    for (int i=0; i<size; i++)
    {
        cin >> array[i];
        }
    int result = check(size, array);
    cout << "Seconds required are: " << result;
}

int check(int size, string array[])
{
    int paint_time;
    int switch_time = 0;
    paint_time = 2 * size;
    for (int i=0; i<size - 1; i++)
    {
        if (array[i] != array [i+1])
        {
            switch_time = switch_time + 1;
        }
    }
    int total_time = paint_time + switch_time;
    return total_time;
}
