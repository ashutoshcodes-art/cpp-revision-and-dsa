/*
PATTERN 13

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

Source : Strivers DSA Sheet

*/

#include <iostream>
using namespace std;

void pattern(int n) {
    int num=1;
        for(int i =1 ; i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<num++<<" ";
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