/*
PATTERN 15

ABCDE
ABCD
ABC
AB
A

Source : Strivers DSA Sheet

*/

#include <iostream>
using namespace std;

void pattern(int n) {
        for(int i =1 ; i<=n;i++){
            for(int j=1;j<=n-i+1;j++){
                cout<<(char)(j+64);
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