#include <iostream>
#include <utility>
using namespace std;

int main() {
    // pair<int,string> student;
    
    // student.first = 32;
    // student.second = "Ashutosh";
    
    pair<int,string> student1= {231,"Ashutosh"};
    pair<int,string> student2= {101,"Raju"};
    // //OR 
    // pair<int,string> student(231,"Ashutosh");

    student1.swap(student2);

    cout<<student1.first<<" "<<student1.second<<'\n';
    cout<<student2.first<<" "<<student2.second<<'\n';

    pair<int,pair<int,int>> p1 = {1,{4,5}};

    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<'\n';

    pair<int,int> arr[3] = {{1,2},{3,4},{5,6}};
    cout<<arr[2].first<<" "<<arr[2].second<<'\n';

    return 0;
}