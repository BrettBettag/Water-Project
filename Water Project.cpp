#include <iostream>

using namespace std;
const double min_water_charge = 16.67;
int current_water_usage;
int previous_water_usage;
int total_water_usage;
double water_charge;
int total_over1000;
int main()
{
    cout << "Please enter the current water reading" << endl;
    cin >> current_water_usage;

    cout << "Please enter the previous water reading" << endl;
    cin >> previous_water_usage;

    total_water_usage = current_water_usage - previous_water_usage;

    cout << "The total gallons of water used is: " << endl;

if (total_water_usage < 1000)
{
    water_charge = min_water_charge;
}
else
{

        water_charge = total_water_usage / 1000;
        water_charge = water_charge * 7;
}
cout << "Your water charge is : " << water_charge << endl;

    return 0;
}
