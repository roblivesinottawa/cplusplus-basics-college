#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float fvalue = 70.4;
    cout << sizeof(float) << endl;
    cout << setprecision(20) << fixed <<  fvalue << endl;

    double dvalue = 70.4;
    cout << setprecision(20) << fixed << dvalue << endl;

    long double lvalue = 192.8942123456335445;
    cout << setprecision(20) << fixed << lvalue << endl;
    cout << "Size of long double: " << sizeof(lvalue) << endl;


    return 0;
}