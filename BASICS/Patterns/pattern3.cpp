/*
PATTERN 3

1
12
123
1234
12345

Source : Strivers DSA Sheet

*/

#include <iostream>
using namespace std;

void pattern(int n) {
        for(int i =1 ; i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            cout<<endl;
        }
    }

int main(){
    int n;
    cout<<"Enter Value of n : ";cin>>n;
    pattern(n);
    return 0;
}