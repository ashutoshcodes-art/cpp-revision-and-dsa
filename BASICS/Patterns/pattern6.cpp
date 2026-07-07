/*
PATTERN 6

12345
1234
123
12
1

Source : Strivers DSA Sheet

*/

#include <iostream>
using namespace std;

void pattern(int n) {
        for(int i =1 ; i<=n;i++){
            for(int j=1;j<=n-i+1;j++){
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