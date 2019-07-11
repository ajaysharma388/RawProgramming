#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec(5,0);// this constructor call create the vector of size 5 and initialise each element with the value 0.
    for(int i = 0 ; i < vec.size() ; ++i){
        cout << vec[i] << " ";
    }
    cout<<endl;
    return 0;
}
