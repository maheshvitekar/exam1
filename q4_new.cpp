#include <iostream>
using namespace std;

int main() 
{
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    string result = (num1 == num2) ? "Both numbers are equal" : (num1 > num2) ? "First number is greater" : "Second number is greater";

    cout << result << std::endl;

    return 0;
}
