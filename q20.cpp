#include <iostream>
using namespace std;

void fibonacci(int n) 

#include <iostream>

// Function to calculate Fibonacci series up to n
void fibonacci(int n) 
{
    int a = 0, b = 1;

    if (n <= 0) 
    {
        cout << "Invalid input. Please enter a positive number." << std::endl;
        return;
    }

    cout << "Fibonacci Series:";

    for (int i = 0; i < n; ++i) {
        std::cout << " " << a;
        int next_term = a + b;
        a = b;
        b = next_term;
    }

    cout << std::endl;
}

int main() {
    int n;

    cout << "Enter the number of Fibonacci numbers you want: ";
    cin >> n;

    fibonacci(n);

    return 0;
}

