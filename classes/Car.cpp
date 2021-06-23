#include <iostream>
using namespace std;

class Car {
    public:
    string make;
    string model;
    int year;
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed){
    return maxSpeed;
}


int main() 
{
    Car carOne;
    carOne.make = "Ford";
    carOne.model = "Mustang";
    carOne.year = 1990;

    Car carTwo;
    carTwo.make = "Chevrolet";
    carTwo.model = "Chevy";
    carTwo.year = 1995;
    
    cout << carOne.make << " " << carOne.model << " " << carOne.year << "\n";
    cout << carTwo.make << " " << carTwo.model << " " << carTwo.year <<  "\n";

    cout << carOne.make << " " << carOne.model << " runs at " << carOne.speed(200) << "km an hour." << endl;

    return 0;
}