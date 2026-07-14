#include <iostream>
#include <unordered_set>
using namespace std;

// Header File : <unordered_set>

int main()
{
    //[DECLARATION]----------------------------------------------------------

    unordered_set<int> us;

    // Stores unique elements.
    // Does NOT maintain sorted order.
    // Implemented using a Hash Table.

    //[INSERT FUNCTION]------------------------------------------------------

    us.insert(30);
    us.insert(10);
    us.insert(20);
    us.insert(20);      // Duplicate ignored

    //[SIZE AND EMPTY]-------------------------------------------------------

    cout << us.size() << '\n';
    cout << us.empty() << '\n';

    //[FIND FUNCTION]--------------------------------------------------------

    auto it = us.find(20);

    if(it != us.end())
        cout << *it << '\n';

    //[COUNT FUNCTION]-------------------------------------------------------

    cout << us.count(20) << '\n';

    //[ERASE FUNCTION]-------------------------------------------------------

    us.erase(20);

    //[ITERATION]------------------------------------------------------------

    for(auto x : us)
        cout << x << " ";

    return 0;
}

//[NOTES]--------------------------------------

// Average Time Complexity:
// insert() -> O(1)
// erase()  -> O(1)
// find()   -> O(1)
// count()  -> O(1)

// Worst Case:
// O(n)

// Does NOT support:
// lower_bound()
// upper_bound()

// Iterator Type:
// Forward Iterator