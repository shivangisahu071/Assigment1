/*Write a C++ program to print the pattern
    sample output: for n=3                  sample output: for n=4
    1*2*3                                                 1*2*3*4
    4*5*6                                                 5*6*7*8
    7*8*9                                                 9*10*11*12
*/
#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout << "enter the value of n: ";
    cin >> n;int k=1;//responsible for printing nos.
    for (int row =1;row<=3;row++)//for rows
    {
        for(int col=1;col<=n;col++)//for columns
        {
            if (k==(n*row))//responsible for generating "*"
            {
                cout << k++;
            }
            else
            {
                cout << k++ << "*";
            }
            
        }
        cout << endl;
    }
    
    return 0;
}