#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    int n,temp;
    cin>>n;
    vec.reserve(n);
    for(int i = 0 ; i < n ; i++){
        cin>>temp;
        vec.push_back(i);
    }
    cout<<"First Element in the vector :"<<vec.at(0)<<endl;
    cout<<"Last Element in the vector :"<<vec.back()<<endl;
    cout<<"Capacity of the vector is :"<<vec.capacity()<<endl;
    return 0;
}
