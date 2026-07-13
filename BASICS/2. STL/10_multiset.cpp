#include <iostream>
#include <set>
using namespace std;

// Header File : <set>

int main(){

    //[DECLARATION]-----------------------------------------------------------------------------------------------------------

    multiset<int> ms;

    //Automatically stores elements in sorter order
    //Duploicate elements are allowed
    //Implemented using Balanced Binary Search Tree

    //[INSERT FUNCITON]-------------------------------------------------------------------------------------------------------

    ms.insert(10);
    ms.insert(20);
    ms.insert(60);
    ms.insert(20);
    ms.insert(10);
    ms.insert(70);

    //[SIZE AND EMPTY FUNCTIONS]---------------------------------------------------------------------------------------------

    cout << ms.size() << '\n';
    cout << ms.empty() << '\n';   // Returns true(1) if empty else false(0)

    //[COUNT FUNCTION]-------------------------------------------------------------------------------------------------------

    cout << ms.count(20) << '\n';

    //[FIND FUNCTION]--------------------------------------------------------------------------------------------------------

    auto it = ms.find(20);
    
    if(it != ms.end())
        cout << *it << '\n';

    //[ERASE FUNCTION]-------------------------------------------------------------------------------------------------------

    // ms.erase(20); //Erases all occurances of 20
    //So we use iterator to erase single occurance 
    //For ex : 
    auto it2 = ms.find(20);

    if(it2 != ms.end()){
    ms.erase(it2); //Erase only single occurance of 20
    }

    //[LOWER AND UPPER BOUND]-------------------------------------------------------------------------------------------------

    ms.lower_bound(20);
    ms.upper_bound(20);

    //[ITERATION]------------------------------------------------------------------------------------------------------------

    for(auto temp : ms){
        cout << temp <<" ";
    }

    //======================================[Notes]=======================================

    // Header File : <set>

    // Stores elements in sorted order.
    // Duplicate elements are allowed.
    // Implemented using a Balanced Binary Search Tree.

    // Time Complexity:
    // insert()      -> O(log n)
    // erase()       -> O(log n)
    // find()        -> O(log n)
    // count()       -> O(log n)
    // lower_bound() -> O(log n)
    // upper_bound() -> O(log n)

    // erase(value)    -> Removes all occurrences.
    // erase(iterator) -> Removes only one occurrence.

    // Iterator Type:
    // Bidirectional Iterator

    return 0;
}