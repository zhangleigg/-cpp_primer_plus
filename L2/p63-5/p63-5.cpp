#include <iostream>

int main(int argc, const char *argv[])
{
    int degree_celsius = 0;
    int degrees_fahrenheit = 0;

    using namespace std;
    cout << "This program convert ℃ to ℉" << endl;
    cin >> degree_celsius;
    degrees_fahrenheit = degree_celsius * 1.8 + 30;
    cout << "Fahrenheit is " << degrees_fahrenheit << "℉" << endl;

    return 0;
}