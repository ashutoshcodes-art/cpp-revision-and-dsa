/*
PATTERN 22

4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 

Source : Strivers DSA Sheet

*/

#include <iostream>
#include <algorithm>
using namespace std;

int distance(int i,int j,int d){
    int topdis= i-1,
    leftdis = j-1,
    rightdis = d-j,
    bottomdis = d-i;
    int mindis = min({topdis,leftdis,rightdis,bottomdis});
    return mindis;
}

void pattern(int n)
{
    int dimention = 2*n - 1;
    for (int i = 1; i <= dimention ; i++)
    {
            for (int j = 1; j <= dimention; j++)
            {
                int shortestdis = distance(i,j,dimention);
                cout<<n-shortestdis<<" ";
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