#include <iostream>
#include <algorithm> //Req for sort
#include <vector>
using namespace std;

int main() {
   
    //[SORT FUNCTION]--------------------------------------------------------------------------------------------

    vector<int> v = {5,2,9,1,7};

    //Sort in Ascending Order
    sort(v.begin(),v.end()); //{1,2,5,7,9}

    // Header file : <algorithm>
    // Time Complexity : O(n log n)
    // Default order : Ascending
    // Sorts elements in the iterator range [first,last)
    // Uses Introsort in most STL implementations

    //[REVERSE FUNCTION]-----------------------------------------------------------------------------------------

    vector<int> v1 = {1,2,3,4,5};

    reverse(v1.begin() + 1,v1.end() -1); //{1,4,3,2,5}

    // Header File : <algorithm>
    // Time Complexity : O(n)
    // Space Complexity : O(1)
    // Reverses elements in the iterator range [first,last)

    //[REVERSE SORT ARRAY ]---------------------------------------------------------------------------------------

    //first sort() array then reverse() ---- not preferred STL way and avoid extra pass over data

    vector<int> v3 = {8,4,5,3,2,1,5};

    sort(v3.begin(),v3.end(),greater<int> ()); //Returns direct;y reversed array {8 5 5 4 3 2 1 }

    //[FIND FUNCTION]---------------------------------------------------------------------------------------------
    
    vector<int> v2 = {10,20,30,40,50};

    auto it = find(v2.begin(),v2.end(),30);
    // cout<<*it<<'\n'; //Prints value on returned iterator
    //Returns the first occurance in case of duplicate elements

    if(it != v2.end()){
        cout<<"Found"<<'\n';
    }
    else 
    cout<<"Not Found"<<'\n';

    // Header File : <algorithm>
    // Time Complexity : O(n)
    // Space Complexity : O(1)
    // Returns an iterator.
    // If element is not found, returns end().

    //[COUNT FUNCTION]----------------------------------------------------------------------------------------------

    vector<int> v4 = {10,20,30,20,40,20};

    int cnt = count(v4.begin(),v4.end(),20);

    cout<<cnt<<'\n';

    // Header File : <algorithm>
    // Time Complexity : O(n)
    // Space Complexity : O(1)
    // Returns the number of occurrences of the given value

    //[BINARY_SEARCH FUNCTION]--------------------------------------------------------------------------------------
    //Works only on (Sorted Arrays)==

    vector<int> v5 = {10,20,30,40,50};

    bool found = binary_search(v5.begin(),v5.end(),30); //Retuns boolean type

    cout<<found<<'\n';

    // Header File : <algorithm>
    // Time Complexity : O(log n)
    // Space Complexity : O(1)
    // Returns true if the element exists, otherwise false.
    // IMPORTANT : The range must be sorted before using binary_search().

    

    for(auto temp : v3){
        cout<<temp<<" ";
    }

    return 0;
}