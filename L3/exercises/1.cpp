#include <iostream>

int main(int argc, const char *argv[])
{

    using namespace std;

    int high_mm;
    float high_inc;
    cout << "Input height!(unit:mm)" << endl;
    cin >> high_mm;
    high_inc = high_mm / 304.8;
    cout.setf(ios_base::fixed);
    cout.precision(3);
    cout << high_inc << "inches" << endl;

    return 0;
}