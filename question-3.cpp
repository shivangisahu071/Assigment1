/*. Write a C++ program to find the largest digit in a number.
*/
#include <iostream>
using namespace std;



int count(int n)
{
    int c=0;//counts the no. of digits in the number
    int k=n; 
    while(k!=0)//counts the no. of digits
    {
        c++;
        k/=10;
    }
    return c;

}

int largest(int num[],int n)//finds the largest digit in the entered number
{
    int max=num[0];
    int c=count(n);
    for (int i = 0; i < c; i++)
    {
        if (max < num[i])
        {
            max=num[i];
        }
        
    }
    return max;
}

int main()
{ 
    int n;//stores the original no. 
    cout << "enter a number: ";
    cin >> n;
    int digit=count(n);
    int num[digit];
    int k=n;
    for (int i = 0; i < digit; i++,k/=10)//pushing the digits into the num array
    {
        num[i]=k%10;
    }
    int large=largest(num,n);
    cout << "the largest digit is "<< large<< "\n";
    return 0;  
}