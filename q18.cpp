//Write a program to sort even and odd elements of an array separately.
#include<iostream>
using namespace std;
int main()

{
    def separate_sort(arr):
    even_nums = []
    odd_nums = []

    # Separate even and odd numbers
    for num in arr:
        if num % 2 == 0:
            even_nums.append(num)
        else:
            odd_nums.append(num)

    # Sort even and odd lists
    even_nums.sort()
    odd_nums.sort()

    # Combine sorted even and odd lists
    sorted_arr = even_nums + odd_nums

    return sorted_arr

# Example usage
input_arr = [12, 34, 45, 9, 8, 90, 3]
sorted_result = separate_sort(input_arr)
print("Original Array:", input_arr)
print("Sorted Array (Even and Odd separated):", sorted_result)

}
