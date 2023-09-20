/* 13.Write a program by using switch case if user enter 11 it will have are area of
circle and when user enter 22 it will have area of rectangle and when user enter
33 it will give area of square when user enter 44 it will give area of triangle.*/


#include <iostream>
using namespace std;

int main() 
{
    int choice;
    cout << "Choose a shape to calculate its area:" << endl;
    cout << "11: Circle" << endl;
    cout << "22: Rectangle" << endl;
    cout << "33: Square" << endl;
    cout << "44: Triangle" << endl;
    cin >> choice;

    switch (choice) {
        case 11: // Circle
            double radius, circleArea;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            circleArea = 3.14 * radius * radius;
            cout << "The area of the circle is: " << circleArea << endl;
            break;

        case 22: // Rectangle
            double length, width, rectangleArea;
            cout << "Enter the length and width of the rectangle: ";
            cin >> length >> width;
            rectangleArea = length * width;
            cout << "The area of the rectangle is: " << rectangleArea << endl;
            break;

        case 33: // Square
            double side, squareArea;
            cout << "Enter the side length of the square: ";
            cin >> side;
            squareArea = side * side;
            cout << "The area of the square is: " << squareArea << endl;
            break;

        case 44: // Triangle
            double base, height, triangleArea;
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            triangleArea = 0.5 * base * height;
            cout << "The area of the triangle is: " << triangleArea << endl;
            break;

        default:
            cout << "Invalid choice. Please enter a valid choice (11, 22, 33, or 44)." << endl;
            break;
    }

    return 0;
}
