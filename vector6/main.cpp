#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    for(int i = 1 ; i <= 5 ; ++i){
        vec.push_back(i*i);
    }
    cout << "Initial Size of vector "<< vec.size() << endl;
    vec.clear();
    cout << "Size of vector after calling clear method "<< vec.size() << endl;
    return 0;
}
