/*Write a C++ program to print the pattern
sample output:
n=2

12
1122

n=3

123
112233
111222333*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cout << i;
    }
    cout << endl;
    
    for (int i = 1; i <= n; i++) {
        cout << i << i;
    }
    cout << endl;
    
    if (n >= 3) {
        for (int i = 1; i <= n; i++) {
            cout << i << i << i;
        }
        cout << endl;
    }
    
    return 0;
}