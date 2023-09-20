#include <iostream>
using namespace std;

int main() 
{
    int N;
    
    cout << "Enter a positive integer N: ";
    cin >> N;

    if (N < 1) 
    {
        std::cout << "N must be a positive integer." << std::endl;
        return 1;
    }

    int i = 2;  // Start with the first even number, which is 2

    // Use a while loop to print even numbers from 2 to N
    
    while (i <= N) 
    {
        std::cout << i << " ";
        i += 2;  // Increment by 2 to get the next even number
    }

    cout << std::endl;

    return 0;
}
