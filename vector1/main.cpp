#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int > vect;
    // the size() method is the member method that basically return the size of the
    //vector container.In other words how much element are there in the vector.
    cout<<"Size of vect : "<<vect.size()<<endl;
    // the capacity() is the special method that return how much elements the vector can hold.
    cout<<"capacity of vect : "<<vect.capacity()<<endl;
    // reserve() is the another function that basically reserves the space for the vector for first time.
    cout<<"space is reserved for the vector"<<endl;
    vect.reserve(100);
    cout<<"Size of vect : "<<vect.size()<<endl;
    // the capacity() is the special method that return how much elements the vector can hold.
    cout<<"capacity of vect : "<<vect.capacity()<<endl;
    return 0;
}
