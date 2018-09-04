//calcute BMI
#include <iostream>
#include <cmath>

int main(int argc, const char *argv[])
{

    using namespace std;

    short hei_ft;
    float hei_in;
    float wei_kg;
    float bmi;

    float hei_m;
    float wei_lb;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "your height feet and inches\n";
    cin >> hei_ft >> hei_in;
    //cout<<hei_ft<<endl<<hei_in<<endl;
    hei_in += hei_ft * 12;
    hei_ft = 0;

    cout << "your weight in pounds\n";
    cin >> wei_lb;

    hei_m = hei_in * 0.0254;
    wei_kg = wei_lb / 2.2;
    bmi = wei_kg / (sqrt(hei_m));

    cout << wei_kg << endl
         << hei_m << endl;
         cout.precision(2);
    cout << "your BMI is " << bmi << endl;

    return 0;
}