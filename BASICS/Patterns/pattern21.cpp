/*
PATTERN 21

****
*  *
*  *
****

Source : Strivers DSA Sheet

*/

#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
            for (int j = 1; j <= n; j++)
            {
                if ( i == 1 || i== n || j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                    cout << " ";
            }
            cout << '\n';
        }
}

int main()
{
    int n;
    cout << "Enter Value of n : ";
    cin >> n;
    pattern(n);
    return 0;
}