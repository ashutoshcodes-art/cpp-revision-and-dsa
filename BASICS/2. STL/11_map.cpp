#include <iostream>
#include <map>
using namespace std;

// Header File : <map>

int main()
{
    //[DECLARATION]----------------------------------------------------------

    map<int,string> m;

    // Stores key-value pairs.
    // Keys are unique.
    // Automatically sorted by key.
    // Implemented using a Balanced Binary Search Tree.

    //[INSERTION]------------------------------------------------------------

    m[101] = "Ashutosh";
    m[102] = "Rahul";
    m[103] = "Aman";

    //[SIZE AND EMPTY]-------------------------------------------------------

    cout << m.size() << '\n';
    cout << m.empty() << '\n';

    //[ACCESS]---------------------------------------------------------------

    cout << m[101] << '\n';
    // m[key] inserts the key if it doesn't exist
    // and value-initializes the value.

    //[FIND]-----------------------------------------------------------------

    auto it = m.find(102);

    if(it != m.end())
    {
        cout << it->first << " " << it->second << '\n';
    }

    //[COUNT]----------------------------------------------------------------

    cout << m.count(101) << '\n';

    //[ERASE]----------------------------------------------------------------

    m.erase(102);          // Erase by key
    m.erase(m.begin());    // Erase by iterator

    //[LOWER & UPPER BOUND]--------------------------------------------------

    m.lower_bound(101);
    m.upper_bound(101);

    //[ITERATION]------------------------------------------------------------

    for(auto x : m)
    {
        cout << x.first << " " << x.second << '\n';
    }

    //NOTES=========



// Time Complexity:
// insert()      -> O(log n)
// erase()       -> O(log n)
// find()        -> O(log n)
// count()       -> O(log n)
// lower_bound() -> O(log n)
// upper_bound() -> O(log n)

// Iterator Type:
// Bidirectional Iterator

// Access:
// it->first  -> Key
// it->second -> Value

    return 0;
}