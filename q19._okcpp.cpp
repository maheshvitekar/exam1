#include <iostream>
using namespace std;

int denominations[] = {100, 50, 10, 5, 2, 1};
int numDenominations = 6;

// Function to calculate the minimum number of notes
void countNotes(int amount) 

{
    int noteCount[numDenominations] = {0};

    for (int i = 0; i < numDenominations; i++) 
    {
        if (amount >= denominations[i]) 
        {
            noteCount[i] = amount / denominations[i];
            amount %= denominations[i];
        }
    }

    cout << "Minimum number of notes:\n";
    for (int i = 0; i < numDenominations; i++) {
        if (noteCount[i] > 0) {
            cout << denominations[i] << " Rs note(s): " << noteCount[i] << endl;
        }
    }
}

int main() 
{
    int amount;
    cout << "Enter the amount in Rs: ";
    cin >> amount;
    
    countNotes(amount);
    
    return 0;
}
