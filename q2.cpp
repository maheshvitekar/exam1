#include <stdio.h>
#include <string.h>

void reverseString(char* str) 

{
    if (str == NULL) 
    {
        return;
    }

    int length = strlen(str);
    int i, j;

    // Swap character
    for (i = 0, j = length - 1; i < j; i++, j--) 
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() 
{
    char str[] = "Hello, World!";
    
    printf("Original string: %s\n", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
