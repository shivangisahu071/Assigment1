/* Write a C++ program to print the pattern
for n=3             for n=2
123                 12
112233              1122
111222333
*/
#include <iostream>
using namespace std;

int main ()
{
    int n;//storing the how many rows 
    cout << "enter the value of n: ";
    cin >> n;
    cout << "for value of " << n <<endl;
    for (int row= 1; row <= n; row++)//for rows
    {
        for (int col = 1; col <= (row*n); col++)//for columns
        {
            if (col<=n)
            {
                for (int repeat = 1; repeat<=row; repeat++)//for printing the nos. 
                {
                    cout << col;
                } 
            }
            else
            {
                break;
            }
            
             
        }
        cout <<endl;
        
    }
    

}
