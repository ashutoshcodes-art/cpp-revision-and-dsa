/*
PATTERN 11

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

Source : Strivers DSA Sheet

*/

#include <iostream>
using namespace std;

void pattern(int n) {
        for(int i =1 ; i<=n;i++){
            for(int j=1;j<=i;j++){
                if(i%2==j%2)
                cout<<"1 ";
                else 
                cout<<"0 ";
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