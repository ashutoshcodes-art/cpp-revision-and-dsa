#include <iostream>
#include <vector>
using namespace std;

int main() {
   
        //[ITERATORS]-----------------------------------------------------------------------------------------
        cout<<"Iterators : "<<'\n';
        vector<int> v5 = {10, 20, 30, 40};

        cout<<"Value at index 0 : "<<v5[0]<<" OR "<<v5.at(0)<<'\n';

        vector<int>::iterator it = v5.begin();
        //OR
        // auto it = v5.begin();

        cout<<*it<<'\n';
        ++it;
        cout<<*it<<'\n';
        it++;
        it++;
        // Post-increment:
        // 1. Copy iterator
        // 2. Move iterator
        // 3. Return old copy
        cout<<*it<<'\n';
        
    //[BEGIN() AND END() ITERATORS]----------------------------------------------------------------------------

        auto it2 = v5.begin();

        // cout<<*it2++<<'\n'; //increases iterator & return current value = 10  same as *(it++)
        // cout<<*it2<<'\n'; //return next value iterator is pointing i.e = 20

                //[INCREMENT AND DECREMENT OF ITERATORS AND VALUE]---------------------------------------------

                cout<<*(it2++)<<'\n';  //return current value and increase iterator 
                cout<<*it2<<'\n'; //prints next iterator
                cout<<(*it2)++<<'\n'; //**IMP : increases value at iterator i.e(20+1) -- don't INCREASE iterator pointing same address (2nd address)
                cout<<*it2<<'\n'; //prints increased value (20+1)
                cout<<++(*it2)<<'\n'; // value at current iterator increases 

        cout<<"V5 Printing using iteration : "<<'\n';
        for (auto it3 = v5.begin(); it3 != v5.end(); it3++) //v.end() points address post last element OR (points address after last element)
        {
            cout<<*(it3)<<" ";
        }
        cout<<'\n';

    //OR
        cout<<"V5 Printing using iteration : "<<'\n';
        for (auto temp : v5) //(auto) will take (integer) here-- but in the previous loop (auto) takes (iterator)
        {
            cout<<temp<<" ";
        }
        cout<<'\n';

    return 0;
}