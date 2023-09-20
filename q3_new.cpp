// q.3 Write a program to Print Prime Numbers between Two numbers.

#include <iostream>
using namespace std;

bool isPrime(int num) 
{
    if (num <= 1) 
    
    {
        return false;
    }
    
    if (num <= 3) 
    
    {
        return true;
    }
    
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    
    for (int i = 5; i * i <= num; i += 6) 
    
    {
        if (num % i == 0 || num % (i + 2) == 0) 
        
        {
            return false;
        }
    }
    return true;
}

void printPrimesBetween(int start, int end) {
    if (start < 2) 
    {
        start = 2;
    }
    cout << "Prime numbers between " << start << " and " << end << ": ";
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }
    cout << endl;
}

int main() {
    int startNum, endNum;
    cout << "Enter the starting number: ";
    cin >> startNum;
    cout << "Enter the ending number: ";
    cin >> endNum;
    printPrimesBetween(startNum, endNum);
    return 0;
}


