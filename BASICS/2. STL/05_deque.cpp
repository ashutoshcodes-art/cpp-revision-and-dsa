#include <iostream>
#include <deque>
using namespace std;

// Header File : <deque>

int main(){

    //[INITIALISATION]------------------------------------------------------------------------------------------------------

    deque <int> dq;
    deque<int> dq4(5);        // {0,0,0,0,0}
    deque<int> dq5(5,100);    // {100,100,100,100,100}
    //Why not vector?
    //deque because push_back() and pop_front() are O(1), while vector::pop_front() (or erasing the first element) requires shifting all remaining elements, making it O(n).


    // Internally stores elements in multiple contiguous blocks.
    // Provides O(1) insertion/deletion at both ends.
    // Random access is O(1) but slightly slower than vector.
    // because deque stores elements in multiple contiguous blocks. 

    // Use deque when frequent operations are required at both front and back.

    //[PUSH AND POP FUNCTIONS]------------------------------------------------------------------------------------------------

    dq.push_back(20);
    dq.push_front(10);
    dq.push_back(30);
    dq.push_front(5);

    //[FRONT AND BACK FUNCTIONS]-----------------------------------------------------------------------------------------------

    deque <int> dq1 = {10,20,30};

    cout<< dq1.size() << '\n'; //Get size of deque

    cout << dq1.front() << " " << dq1.back() << '\n';

    dq1.front() = 100;
    // Returns a reference to the first element.
    dq1.back() = 300;
    // Returns a reference to the last element.

    // Can be used to both access and modify elements.

    //[INSERT FUNCTION]-------------------------------------------------------------------------------------------------------

    deque <int> dq2 = {10,20,30};

    dq2.insert(dq2.begin()+1,2,100); //Inserts 2 instances of 100 at index 1

    //[ERASE FUNCTION]-------------------------------------------------------------------------------------------------------

    deque <int> dq3 = {10,20,30,40,50,60};

    // dq3.erase(dq3.begin()+1); //Erases element at index 1

    dq3.erase(dq3.begin()+1,dq3.begin()+4); //Erases elements in range [1,4)

    //[ITERATION]-----------------------------------------------------------------------------------------------------------
    //SAME AS VECTORS

    for(auto it = dq3.begin(); it != dq3.end();it++){
        cout<< *it <<" ";
    }
    cout << '\n' ;

    //[EMPTY FUNCTION]------------------------------------------------------------------------------------------------------

    cout << dq3.empty() << '\n';

    for (auto temp : dq2)
    {
        cout<<temp<<" ";
    }
      

    return 0;
}