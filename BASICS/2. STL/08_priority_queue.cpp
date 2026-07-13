#include <iostream>
#include <queue>
using namespace std;

// Header File : <queue>

int main()
{

    //[DECLARATION]---------------------------------------------------------------------------------------------------

    priority_queue <int> pq; //This is a Max Priority Queue

    //Priority Queue is a Container Adapter
    //Uses Heap Internally
    //By Default, it is a Max Heap

    //[PUSH FUNCTION]-------------------------------------------------------------------------------------------------

    pq.push(10);
    pq.push(50);
    pq.push(20);
    pq.push(30);

    // 50 30 20 10

    //[TOP FUNCTION]--------------------------------------------------------------------------------------------------

    cout << pq.top() << '\n'; //Largest Element

    //[POP FUNCTION]--------------------------------------------------------------------------------------------------

    pq.pop(); //Removes Top Element 
    // 30 20 10

    cout << pq.top() << '\n';

    //[SIZE AND EMPTY FUNCTION]--------------------------------------------------------------------------------------

    cout << pq.size() << '\n'; // Size = 3

    cout << pq.empty() << '\n'; //{Returns true(1) if empty else false(0)}

    //[TRANSVERSAL]--------------------------------------------------------------------------------------------------

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    //[MIN PRIORITY QUEUE]-------------------------------------------------------------------------------------------

    priority_queue< int , vector<int> , greater<int> > minPQ;

    return 0;
}