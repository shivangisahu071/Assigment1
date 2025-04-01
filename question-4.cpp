/* Write a C++ program to input a decimal number and convert it into binary and
 octal number system using loops.
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string binary(int n)//finding the binary equivalent of n 
{
    string bin="";
    while(n>0)
    {
        bin+=to_string(n%2);//converting the remainder to string
        n/=2;
    }
    reverse(bin.begin(),bin.end());
    return bin;

}
string octal(int n)//finding the octal equivalent of n
{
    string octa="";
    while (n>0)
    {
        octa+=to_string(n%8);//converting the remainder to string 
        n/=8;
    }
    reverse (octa.begin(),octa.end());
    return octa;
    
}



int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    string b=binary(n);
    cout << "the binary equivalent is " << b <<endl;
    string octa=octal(n);
    cout << "the octal equivalent is " << octa <<endl;
    return 0;
}