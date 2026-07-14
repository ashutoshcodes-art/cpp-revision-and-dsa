#include <iostream>
#include <unordered_map>
using namespace std;

// Header File : <unordered_map>

int main()
{

    //[DECLARATION]------------------------------------------------------------------------------------------------------

    unordered_map<int, string> um;

    // Stores key-value pairs.
    // Keys are unique.
    // Does NOT maintain sorted order.
    // Implemented using a Hash Table.

    //[INSERTION / ACCESS]-----------------------------------------------------------------------------------------------

    um[101] = "Ashutosh";
    um[102] = "Rahul";
    um[103] = "Aman";

    // operator[] inserts the key if it doesn't exist
    // and value-initializes the value.

    //[SIZE AND EMPTY]--------------------------------------------------------------------------------------------------

    cout << um.size() << '\n';

    cout << um.empty() << '\n';     // Returns true(1) if empty else false(0)

    //[FIND FUNCTION]---------------------------------------------------------------------------------------------------

    auto it = um.find(102);

    if(it != um.end())
    {
        cout << it->first << " " << it->second << '\n';
    }

    //[COUNT FUNCTION]--------------------------------------------------------------------------------------------------

    cout << um.count(101) << '\n';      // Returns 1 if key exists else 0

    //[ERASE FUNCTION]--------------------------------------------------------------------------------------------------

    um.erase(102);          // Erases key-value pair with key 102

    //[ITERATION]-------------------------------------------------------------------------------------------------------

    for(auto x : um)
    {
        cout << x.first << " " << x.second << '\n';
    }

    //[FREQUENCY COUNTING (Most Common Use)]----------------------------------------------------------------------------

    unordered_map<int,int> freq;

    int arr[] = {1,2,1,3,2,1};

    for(int x : arr)
    {
        freq[x]++;
    }

    cout << '\n';

    for(auto x : freq)
    {
        cout << x.first << " -> " << x.second << '\n';
    }

    return 0;
}

//------------------------------------------[NOTES]-------------------------------------------

// Average Time Complexity:
// insert()      -> O(1)
// erase()       -> O(1)
// find()        -> O(1)
// count()       -> O(1)
// operator[]    -> O(1)

// Worst Case:
// O(n)

// Iterator Type:
// Forward Iterator

// Access:
// it->first   -> Key
// it->second  -> Value

// Supports:
// operator[]
// insert()
// erase()
// find()
// count()

// Does NOT support:
// lower_bound()
// upper_bound()

// operator[]:
// If key doesn't exist,
// it is automatically inserted with a default value.

// Example:
// unordered_map<string,int> mp;
// cout << mp["Ashutosh"];

// Becomes:
// "Ashutosh" -> 0


//====================================================================================================
// map vs unordered_map

// map
// ---------
// Balanced Binary Search Tree
// Sorted by key
// O(log n)

// unordered_map
// ----------------
// Hash Table
// Not Sorted
// O(1) Average
// O(n) Worst Case