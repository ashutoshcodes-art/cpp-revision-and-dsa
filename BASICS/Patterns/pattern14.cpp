/*
PATTERN 14

A
AB
ABC
ABCD
ABCDE

Source : Strivers DSA Sheet

*/

#include <iostream>
using namespace std;

void pattern(int n) {
        for(int i =1 ; i<=n;i++){
            for(int j=1;j<=i;j++){
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