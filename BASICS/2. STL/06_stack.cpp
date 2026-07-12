#include <iostream>
#include <stack>
using namespace std;

// Header File : <stack>

int main(){

    //[DECLARATION]----------------------------------------------------------------------------------------------

    stack <int> st;

    //[LIFO(Last In First Out) OPERATIONS]-----------------------------------------------------------------------

    // Stack is a Container Adapter.
    // Uses deque internally by default.
    // Follows LIFO (Last In First Out).

    st.push(10);   // Insert at top
    st.push(20);
    st.push(30);
    /*
    Top
    30
    20
    10
    */

    // st.pop();     // Removes the top element.
                    // Returns nothing (void).
    /*
    Top
    20
    10
    */

    cout << st.top() << '\n';     // Access top element i.e 30

    cout << st.empty() << '\n';   // Returns true(1) if stack is empty else false(0)

    cout << st.size() << '\n';    // Number of elements

    while (!st.empty())
    {
        cout << st.top() << ' ';
        st.pop();
    }

    //[INTERVIEW NOTE]--------------------------------------------------------------------------------------------

    // No iterators.
    // No indexing.
    // Only the top element is accessible.
    

    return 0;
}