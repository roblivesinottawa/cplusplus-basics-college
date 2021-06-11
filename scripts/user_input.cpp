#include <iostream>
using namespace std;

// int main() {
//     cout << "What is your name? " << flush;
//     string input;
//     cin >> input;
//     cout << "You entered: " << input << endl;

//     cout << "Enter a number: >>> " << flush;
//     int value;
//     cin >> value;
//     cout <<  "number entered: " << value << endl;
    
//     return 0;
// }

int main()
{
    cout << "What is your name? " << flush;
    string input1;
    cin >> input1;
    cout << "you entered: " << input1 << " as name" << endl;
    
    cout << "How old are you? " << flush;
    string input2;
    cin >> input2;
    cout << "you entered: " << input2 << " as age" << endl;

    cout << "What do you do for a living? " << flush;
    string input3;
    cin >> input3;
    cout << "you entered: " << input3 << " as occupation" << endl;

    return 0;
}