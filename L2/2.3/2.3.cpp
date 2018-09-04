#include <iostream>
#include <string>
#include <cmath>

double cal_sqr(double num)
{

    //calculate sqrt
    num = sqrt(num);

    using namespace std;

    return num;
}

int main(int argc, const char *argv[])
{

    double text_input = 0;
    double num;

    using namespace std;

    //input number
    cin >> text_input;

    //call function
    num = cal_sqr(text_input);

    //print value
    cout << num << endl;

    return 0;
}