#include <iostream>
#include <set>
using namespace std;

//Header File <set>

int main(){

    //[DECLARATION]-------------------------------------------------------------------------------------------------------

    set<int> s;

    //Automatically stores unque elements in Sorted order
    //Implemented using a balanced binary Search Tree
    //All major operations are (log n)

    //[INSERT FUNCTION]---------------------------------------------------------------------------------------------------

    s.insert(30);
    s.insert(10);
    s.insert(60);
    s.insert(20);
    s.insert(20); //Duplicate Ignored

    //[SIZE AND EMPTY FUNCTION]--------------------------------------------------------------------------------------------

    cout << s.size() << '\n';

    cout << s.empty() << '\n'; //Returns true(1) if empty else false(0)

    //[FIND FUNCTION]------------------------------------------------------------------------------------------------------

    auto it = s.find(30);

    if(it != s.end()){
        cout << *it << '\n';
    }

    //[COUNT FUNCTION]-----------------------------------------------------------------------------------------------------

    cout << s.count(30) << '\n'; // 1
    cout << s.count(50) << '\n'; // 0

    //[LOWER AND UPPER BOUND]----------------------------------------------------------------------------------------------

    auto lb = s.lower_bound(20); //First element >= 20
    cout << *lb << '\n';

    auto ub = s.upper_bound(20); //First element > 20
    cout << *ub << '\n';

    cout<< *(++ub) << '\n';
    // Iterator Type:
    // Bidirectional Iterator
    // Supports ++it and --it
    // Does NOT support it + n

    //[ITERATION]----------------------------------------------------------------------------------------------------------

    for(auto temp : s){
        cout << temp << " ";
    }

    //[TIME COMPLEXITY]-----------------------------------------------------------------------------------------------------
    
    // insert()      -> O(log n)
    // erase()       -> O(log n)
    // find()        -> O(log n)
    // count()       -> O(log n)
    // lower_bound() -> O(log n)
    // upper_bound() -> O(log n)

    return 0;
}