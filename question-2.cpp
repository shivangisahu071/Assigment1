/*Write a C++ program to input 3 sides of triangle and a triangle can be drawn
 from it or not, if triangle can be drawn then check if it is equilateral, isosceles or
 scalene triangle.
*/
#include <iostream>
using namespace std;

int main ()
{
    float a,b,c;
    cout << "enter the length of first side :  ";
    cin >> a;
    cout << "enter the length of second side :  ";
    cin >> b;
    cout << "enter the length of third side :  ";
    cin >> c;
    if ((a+b>c) && (b+c>a) && (c+a>b))//by inequality theorem 
    {
        //triangle is possible
       if (a==b && a==c)
       {
        cout << "equilateral triangle\n";
       }
       else if (a==b || a==c || b==c)
       {
        cout << "isoceles triangle\n";
         
       }
       else
       {
        cout << "scalene Triangle\n";
       }
    }
    else
    {
        //triangle not possible
        cout << "triangle is not possible for the set entered values\n";
    }
    return 0;
}