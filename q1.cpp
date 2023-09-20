
// Write a program to find the cube of a number use loop.
#include <iostream>
using namespace std;
int main()

{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int cube = 1; 

    // Calculate the cube using a loop
    for (int i = 0; i < 3; ++i) 
    
    {
        cube *= number;
    }

    cout << "The cube of " << number << " is: " << cube ;

    return 0;
}
