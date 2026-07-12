#include <iostream>
#include <queue>
using namespace std;

// Header File : <queue>

int main()
{
    //[DECLARATION]----------------------------------------------------------

    queue<int> q;

    // Queue is a Container Adapter.
    // Uses deque internally by default.
    // Follows FIFO (First In First Out).

    //[PUSH FUNCTION]--------------------------------------------------------

    q.push(10);
    q.push(20);
    q.push(30);

    //[FRONT AND BACK FUNCTIONS]---------------------------------------------

    cout << q.front() << '\n';   // First element

    cout << q.back() << '\n';    // Last element

    //[POP FUNCTION]---------------------------------------------------------

    q.pop();                     // Removes front********** element

    cout << q.front() << '\n';

    //[SIZE AND EMPTY FUNCTIONS]---------------------------------------------

    cout << q.size() << '\n';

    cout << q.empty() << '\n';   // Returns true(1) if queue is empty else false(0)

    //[QUEUE TRAVERSAL]------------------------------------------------------

    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    //[more notes]------------------

    // No iterators.
    // No indexing.
    // Only front and back elements are accessible.

    return 0;
}