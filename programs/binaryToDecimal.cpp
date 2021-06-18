#include <iostream>
using namespace std;

int main() 
{
    int num;
    int rem;
    int temp; 
    int dec_value = 0;
    int base = 1;
    
    cout << "Enter the binary number: ";
    cin >> num;

    temp = num;
    while (num > 0)
    {
        rem = temp % 10;
        dec_value = dec_value + rem * b;
        base *= 2;
        temp /= 10;
    }

    cout << "The decimal equivalent of " << num << " is " << dec_value;
    return 0;
}