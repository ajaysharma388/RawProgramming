#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    for(int i = 2 ; i <= 5 ; ++i)
        v.push_back(i);
    v.insert(v.begin(),1);
    for(vector<int>::iterator it = v.begin() ; it != v.end() ; ++it)
        cout<< *it << " ";
    cout << endl;
    return 0;
}
