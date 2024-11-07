#include<iostream>
using namespace std;
int calculations(string movies[], string film);
main()
{
    string film;
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    cout << "Enter the name of movies: ";
    cin >> film;
    int price = calculations(movies, film);
    cout << "Discounted price of your movie ticket is: " << price << " Rupees";
}
int calculations(string movies[], string film)
{
    for (int i=0; i< 5; i++)
    {
        if(movies[i] == film)
        {
            if (i%2==0)
            {
                return 500 * 0.9;
            }
            else {
                return 500 * 0.95;
            }
        }
    }


}
