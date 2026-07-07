/*
PATTERN 17

   A
  ABA
 ABCBA
ABCDCBA

Source : Strivers DSA Sheet

*/

#include <iostream>
using namespace std;

void pattern(int n) {
        for(int i =1 ; i<=n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout<<(char)('A'+(j-1));
            }
            for (int j = i-1; j >= 1; j--)
            {
                cout<<(char)('A'+(j-1));
            }
            
            cout<<'\n';
        }
    }

int main(){
    int n;
    cout<<"Enter Value of n : ";cin>>n;
    pattern(n);
    return 0;
}