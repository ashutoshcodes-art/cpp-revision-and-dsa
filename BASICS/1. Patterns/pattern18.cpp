/*
PATTERN 18

E 
D E 
C D E 
B C D E 
A B C D E 

Source : Strivers DSA Sheet

*/

#include <iostream>
using namespace std;

void pattern(int n) {
        for(int i =1 ; i<=n;i++){
            for(int j=i;j>=1;j--){
                cout<<(char)(('A'+n)-j)<<" ";
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