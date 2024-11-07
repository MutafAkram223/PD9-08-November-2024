#include<iostream>
#include<string>
using namespace std;
int calculations(string fruit[], int price[], string fruit_name, int quantity);
main ()
{
    string fruit[] = {"peach", "apple", "guava", "watermelon"};
    int price[] = {60, 70, 40, 30};

    string fruit_name; int quantity;
    cout << "Enter the name of fruit: ";
    cin >> fruit_name;
    cout << "Enter the quantity of fruits (kg): ";
    cin >> quantity;

    int total_price = calculations(fruit, price, fruit_name, quantity);
    cout << "Total price of bought fruits is: " << total_price;
}
int calculations(string fruit[], int price[], string fruit_name, int quantity )
{ 
    for (int i=0; i< 4; i++)
    {
        if(fruit[i] == fruit_name)
        {
            int total_price = price[i] * quantity;
            return total_price;
        }
    }

}
