#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    for(int i = 1; i <= 5 ; ++i)
        v.push_back(i);
    cout<<"Original vector.\n";
    for(vector<int>::iterator it = v.begin() ; it != v.end() ; ++it)
        cout<< *it << " " ;
    cout << "\n";
    v.erase(v.begin());
    cout<<"Modified vector.\n";
    for(vector<int>::iterator it = v.begin() ; it != v.end() ; ++it)
        cout<< *it << " " ;
    cout << "\n";
    return 0;
}
