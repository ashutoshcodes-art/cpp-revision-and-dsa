/*
PATTERN 9

      *
     ***
    *****
   *******
  *********
 ***********
 ***********
  *********
   *******
    *****
     ***
      *

Source : Strivers DSA Sheet

*/

#include <iostream>
using namespace std;

void pattern(int n) {
            for(int i =1 ; i<=n;i++){
            for(int j=1;j<=n-i+1;j++){
                cout<<" ";
            }
            for (int k = 1; k <= 2*i -1; k++)
            {
                cout<<"*";
            }
            
            cout<<endl;
        }
    
        for(int i =1 ; i<=n;i++){

            for (int k = 1; k <=i; k++)
            {
                cout<<" ";
            }
            for(int j=1;j<=2*(n-i)+1;j++){
                cout<<"*";
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