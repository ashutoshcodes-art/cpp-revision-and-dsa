#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.emplace_back(40); 
    // Constructs the element directly inside the vector.
    // Advantage is visible mainly for complex objects.
    cout<<v.size()<<'\n';
    // for (size_t i = 0; i < v.size(); i++)
    // {
        //     cout<<v[i]<<'\n';
        // }
        
        v.pop_back();
        cout<<v.size()<<'\n';

        // [SIZE AND CAPACITY FUNCTIONS]----------------------------------------------------------------------

        for (int i = 1; i < 8; i++)
        {
            cout<<"Before Size : "<<v.size()<<" Before Capacity : "<<v.capacity()<<'\n';
            v.push_back(i);
            cout<<"After Size : "<<v.size()<<" After Capacity : "<<v.capacity()<<'\n';
        }
        
        cout<<v.capacity()<<'\n'; //Currently allocated memory to Vector

        vector<int> v5(5); // Predefined size of vector
        cout<<v5.capacity()<<'\n';

        for (int i = 0; i < 6; i++)
        {
            v5.push_back(1);
            cout<<v5.capacity()<<'\n';
        }
        
        // [COPY FUNCTION]----------------------------------------------------------------------------------

        vector<int> v2(5,100); //5 instances of 100 i.e {100,100,100,100,100}
        vector<int> vcopy(v2); //Copies V2 
        for (size_t i = 0; i < v2.size(); i++)
        {
            cout<<v2[i]<<" ";
        }
        cout<<'\n';

        //[FRONT AND BACK FUNCTIONS]-------------------------------------------------------------------------
        vector <int> v3 = {12,34,35,16};
        cout<<v3.front()<<" "<<v3.back()<<'\n'; //To Print First and last ele 

        cout<<v3.empty()<<'\n'; // Return true(1) if vector size == 0 else false(0)

        //[RESERVE FUNCTION AND RESIZE FUNCTION ]----------------------------------------------------------------------------------
        
        vector <int> v4;
        v4.reserve(100); // Reserves memory for at least 100 elements.
                        // Size remains unchanged.
        cout<<"V4 before size : "<<v4.size()<<" capacity : "<<v4.capacity()<<'\n';
        
        v4.resize(50); // Resize vector to contain 50 elements.
                      // New integers are initialized to 0.
        cout<<"V4 after size : "<<v4.size()<<" capacity : "<<v4.capacity()<<'\n';
        cout<<v4[34]<<'\n';
        
        //[ERASE FUNCTION]--------------------------------------------------------------------------------------------
        //******IN v.erase(index1,index2) in erase function starting index is included but last index is not included 
        vector<int> vec = {10,20,30,40,50,60};

        // vec.erase(vec.begin()+1); //Deletes (0+1)th element i.e 20 so vector will become {10,30,40}

        // vec.erase(vec.begin()+2,vec.begin()+4); //deletes elements from (0+2)to ele before(0+4) = valuesfrom(30to40) 
        //so vector becomes {10,20,50,60}


        vec.erase(vec.begin()+2,vec.end()); //delets elements from (0+2)to last ele = i.e valuesfrom(30 to 60) 
        //so vector becomes {10,20}

        //[INSERT FUNCTION]--------------------------------------------------------------------------------------------
        vector<int> t = {10,20,30,40};
        //v.insert(index,element)
        t.insert(t.begin(),300);  
        //inserts 300 at index 0 i.e vector becomes {300,10,20,30,40}

        //v.insert(index,no. of elements,element)
        t.insert(t.begin(),3,45);
        //inserts 3 instances of 45 at index 0 i.e becomes {45,45,45,300,10,20,30,40}


        //[INSERTING A VECTOR IN VECTOR]-----------------------------------------------------------------
        vector<int> copy(3,500); //{500,500,500}
        //t.insert(index , starting index of vector , ending index of vector )
        t.insert(t.begin(),copy.begin(),copy.end()); 
        //copies copy vector [from index] 0 to 3 [in vector t] at index 0 i.e vector becomes {500,500,500,45,45,45,300,10,20,30,40}

        //[SWAPPING TWO VECTORS]--------------------------------------------------------------------------------------------
        vector<int> a = {1,2,3};
        vector<int> b = {4,5,6};

        b.swap(a); //Swaps a and b vectors all elements in each other

        
        for(auto temp : a){
            cout<<temp<<" ";
        }


    return 0;
}