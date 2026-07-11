#include <iostream>
#include <algorithm> //Req for sort
#include <numeric>
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
    // Returns the number of occurrences of the given value

    cout<<cnt<<'\n';

    // Header File : <algorithm>
    // Time Complexity : O(n)
    // Space Complexity : O(1)

    //[BINARY_SEARCH FUNCTION]--------------------------------------------------------------------------------------
    //Works only on (Sorted Arrays)==

    vector<int> v5 = {10,20,30,40,50};

    bool found = binary_search(v5.begin(),v5.end(),30); //Retuns boolean type
    // Returns true if the element exists, otherwise false.

    cout<<found<<'\n';

    // Header File : <algorithm>
    // Time Complexity : O(log n)
    // Space Complexity : O(1)
    // IMPORTANT : The range must be sorted before using binary_search().

    //[LOWER_BOUND FUNCTION]-----------------------------------------------------------------------------------------

    vector<int> v6 = {10,20,20,20,30,40};

    auto it1 = lower_bound(v6.begin(),v6.end(),2);
    // Returns an iterator to the first element >= value.

    if(it1 != v6.end()){
        cout<<*it1<<'\n';
    }

    // Header File : <algorithm>
    // Time Complexity : O(log n)
    // Space Complexity : O(1)
    // Returns end() if no such element exists.
    // IMPORTANT : Works only on sorted ranges.

    //[UPPER_BOUND FUNCTION]----------------------------------------------------------------------------------------

    vector<int> v7 = {10,20,20,20,30,40};

    auto it2 = upper_bound(v7.begin(),v7.end(),20);
    // Returns an iterator to the first element > value.

    if(it2 != v7.end()){
        cout<<*it2<<'\n';
    }

    // Header File : <algorithm>
    // Time Complexity : O(log n)
    // Space Complexity : O(1)
    // Returns end() if no such element exists.
    // IMPORTANT : Works only on sorted ranges.

    //Suppose we need element count occurances of 20

    auto it3 = lower_bound(v7.begin(),v7.end(),20);

    cout<<it2-it3<<'\n'; // 4 - 1 = 3 occurances

    //[MIN_ELEMENT FUNCTION]-------------------------------------------------------------------------------------------

    vector<int> v8 = {40,10,60,5,30};
    
    auto it4 = min_element(v8.begin(),v8.end());
    // Returns an iterator pointing to the minimum element.

    cout<<*it4<<'\n'; // AS min_element() returns iterator

    // Header File : <algorithm>
    // Time Complexity : O(n)
    // Space Complexity : O(1)
    // Dereference the iterator (*) to get the minimum value.

    //[MAX_ELEMENT FUNCTION]------------------------------------------------------------------------------------------

    vector<int> v9 = {40,10,60,5,30};

    auto it5 = max_element(v9.begin(), v9.end());
    // Returns an iterator pointing to the maximum element.

    cout << *it5<<'\n';

    // Header File : <algorithm>
    // Time Complexity : O(n)
    // Space Complexity : O(1)
    // Dereference the iterator (*) to get the maximum value.

    //[ACCUMULATE FUNCTION]---------------------------------------------------------------------------------------------


    vector <int> v10 = {10,20,30};

    //accumulate(start,end,initial_value_of_sum)
    auto sum = accumulate(v10.begin(),v10.end(),0);
    // Returns the sum of all elements in the given range.

    cout<< sum << '\n' ;

    // Header File : <numeric>
    // Time Complexity : O(n)
    // Space Complexity : O(1)
    // Third parameter specifies the initial value of the sum.

    //[ROTATE FUNCTION]-------------------------------------------------------------------------------------------------
    
    vector <int> v11 = {10,20,30,40,50};

    rotate(v11.begin(),v11.begin() + 2,v11.end()); //Rotates vector so that element in (middle becomes first element)
    // Rotates elements in the range [first,last)

    // Header File : <algorithm>
    // Time Complexity : O(n)
    // Space Complexity : O(1)
    // The element pointed to by 'middle' becomes the first element.

    //[UNIQUE FUNCTION]--------------------------------------------------------------------------------------------------

    vector<int> v12 = {1,1,2,2,2,3,3,4}; //Duplicates should be adjacent to each other

    // v.erase(unique(v.begin(), v.end()), v.end());
    v12.erase( unique( v12.begin(),v12.end() ) , v12.end() );   // Returns an iterator to the new logical end.
        // To actually remove duplicates:

    // Header File : <algorithm>
    // Time Complexity : O(n)
    // Space Complexity : O(1)
    // unique() removes consecutive duplicates.

    //[REMOVE FUNCTION]--------------------------------------------------------------------------------------------------

    vector<int> v13 = {10,20,30,20,40,20};

    // v.erase(remove(v.begin(), v.end(), value), v.end());
    v.erase(remove(v13.begin(), v13.end(), 20), v13.end());
    // remove() shifts all elements not equal to the given value to the front.
    // Returns an iterator to the new logical end.
    // To actually remove the elements:


    // Header File : <algorithm>
    // Time Complexity : O(n)
    // Space Complexity : O(1)

    //[FILL FUNCTION]-----------------------------------------------------------------------------------------------------

    vector<int> v14(5);

    fill(v14.begin(), v14.end(), 100);
    // Assigns the given value to every element in the iterator range [first,last)

    // Header File : <algorithm>
    // Time Complexity : O(n)
    // Space Complexity : O(1)

    //[COPY FUNCTION]-----------------------------------------------------------

    vector<int> a = {10,20,30,40};

    vector<int> b(4);  // Destination must already have enough space or it shows undefined behaviour

    copy(a.begin(), a.end(), b.begin());

    // Header File : <algorithm>
    // Time Complexity : O(n)
    // Space Complexity : O(1)
    // Copies elements from one range to another.

    for(auto temp : b){
        cout<<temp<<" ";
    }

    return 0;
}