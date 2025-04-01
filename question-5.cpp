/*. Write a C++ program to check if a Number is Perfect square using loops.  
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "enter a no.: ";
    cin >> n;
    bool isquare=false;
    double sq =sqrt(n);//determining square root of the number 
    for (int i = 1; i <=sq; i++)
    {
        if ((i*i)==n)//checking the no. for perfect square
        {
            isquare=true;
        }
    }
    if (isquare)
    {
        cout << "perfect square\n";
    }
    else
    {
        cout << "not a perfect square\n";
    }
    
    return 0;
}