#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    for(int i = 1 ; i <= 5 ; ++i)
        v.push_back(i);
    cout<<"Vector Contains"<<endl;
    for(vector<int>::iterator it = v.begin() ; it != v.end() ; ++it)
        cout<<*it<<" ";
    cout << "\n";// always remember you should use '\n' for newline instead of endl because endl causes buffer operation and is
    //comparatively slower.
    return 0;
}
