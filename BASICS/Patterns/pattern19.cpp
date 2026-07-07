/*
PATTERN 19

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

Source : Strivers DSA Sheet

*/

#include <iostream>
using namespace std;

void printrow(int stars,int spaces){
    for (int i = 0; i < stars; i++)
    {
        cout<<"*";
    }
    for (int i = 0; i < spaces; i++)
    {
        cout<<" ";
    }
    for (int i = 0; i < stars; i++)
    {
        cout<<"*";
    }
    // cout<<'\n';
}

void pattern(int n) {
        for(int i =1 ; i<=n;i++){
            printrow(n-i+1,2*i-2);
            cout<<'\n';
        }
        for(int i =n ; i>=1;i--){
            printrow(n-i+1,2*i-2);
            cout<<'\n';
        }
    }

int main(){
    int n;
    cout<<"Enter Value of n : ";cin>>n;
    pattern(n);
    return 0;
}