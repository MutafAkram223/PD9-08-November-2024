#include<iostream>
using namespace std;
void check(int array[], int n, int times);
main ()
{
    int n=3;     //n btata he ke ak array me kitne elements hn ge
    int times;   //times btata he, no of transformation (mtlb 1st loop kitni baar chale ga)
    int array[3];
    cout << "Enter number of times you need transformation: ";
    cin >> times;
    cout << "Enter 3 numbers of array one by one: " << endl;
    for (int i=0; i<n; i++)
    {
    cin >> array[i];
    }

    check(array, n, times);
    for (int i=0; i<n; i++){
    cout << array[i] << "  ";
    }

}

void check(int array[], int n, int times)
{
    for (int i=0; i<times; i++)
    {
        for(int j=0; j<n; j++)
        {
            if (array[j]%2==0)
            {
                array[j]=array[j]-2;
            }
            else
            {
                array[j]=array[j]+2;
            }

        }
    }
}