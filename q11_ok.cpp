// Write a program to Calculate Product of Digits of a Number.

#include<iostream>
using namespace std;
int main()

{
    int num1=345;

   int l1 = num1 % 10;
   int s1 = num1/10;

   int l2 = s1 % 10;
   int s2 = s1/10;

   int l3 = s2 % 10;


   cout << l1 * l2 * l3;

   return 0;


}