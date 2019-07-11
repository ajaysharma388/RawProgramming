#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    if(v.empty())
        cout << "Vector is empty." << endl;
    for(int i = 1 ; i<= 5 ; ++i)
        v.push_back(i);
    if(!v.empty())
        cout<<"The vector is not empty."<<endl;
    return 0;
}
