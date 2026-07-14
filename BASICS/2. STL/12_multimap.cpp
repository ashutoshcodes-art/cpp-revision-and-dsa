#include <iostream>
#include <map>
using namespace std;

// Header File : <map>

int main(){

    //[INITIALISATION]-------------------------------------------------------------------------

    multimap<int,string> mm;

    //Stores key-value pairs
    //Duplicate keys are allowed
    //Automatically sorted by key
    //Implemented using Balanced Binary Search Tree

    //[INSERTING ELEMENT]----------------------------------------------------------------------
    
    // Does NOT support operator[].
    
    // Uses insert() instead.

    mm.insert({100,"Manu"});
    mm.insert({101,"Chandu"});
    mm.insert({101,"Nanu"}); //Duplicate keys are allowed in multimap
    mm.insert({103,"Pichak"});
    mm.insert({101,"Lalu"});

    //[FIND FUNCTION]--------------------------------------------------------------------------

    auto it = mm.find(101); //Returns first occurance

    if(it != mm.end()){
        cout << it->first << " " << it->second <<'\n'; //*it.first also works but this looks cleaner
    }

    //To get all occurances 

    auto range = mm.equal_range(101);

    for (auto it2 = range.first ; it2 != range.second ; ++it2)
    {
        cout << it2->first << " " << it2->second <<'\n';
    }

    //[COUNT FUNCTION]--------------------------------------------------------------------------

    cout << mm.count(101) << '\n';
    
    //[ERASE FUNCTION]--------------------------------------------------------------------------
    
    mm.erase(101); //Erases all entries with key 101
    cout << mm.count(101) << '\n';
    
    //[ITERATION]------------------------------------------------------------------------------

    for(auto temp : mm){
        cout << temp.first <<" "<< temp.second << '\n';
    }

    return 0;
}

//[NOTES] ----------------------------------

// Time Complexity:
// insert()      -> O(log n)
// erase()       -> O(log n)
// find()        -> O(log n)
// count()       -> O(log n)

// Iterator:
// it->first   -> Key
// it->second  -> Value