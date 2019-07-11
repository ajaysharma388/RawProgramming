#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    vector<int>::iterator it,it2;
    int n,temp;
    cin>>n;
    for(int i = 0 ; i < n ; ++i){
        cin>>temp;
        v.push_back(temp);
    }
    int pos,startPos,endPos;
    cin>>pos>>startPos>>endPos;
    it = v.begin();
    it+=(pos-1);
    v.erase(it);
    it = v.begin();
    it+=(startPos-1);
    it2 = v.begin();
    it2+=(endPos-1);
    v.erase(it,it2);
    cout<<v.size()<<endl;
    for(int i = 0 ; i < v.size() ; ++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
