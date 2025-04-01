/*. Write a C++ program to print the pattern
    sample output: for n=4
    1      1
    12    21
    123  321
    12344321
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<< "enter the value n: ";
    cin  >> n;
    for (int row = 1; row<=n; row++)
    {
        //for printing increasing no.
        for(int col=1; col<=row ;col++)
        {
            cout<< col;
        }
        //for printing spaces 
        for(int space=1;space<=(2*(n-row));space++)
        {
            cout << " ";
        }
        //for printing decreasing nos.
        for (int j=row;j>0;j--)
        {
            cout << j;
        }
         
        cout <<endl;
    }
    
    return 0;
}