#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i = 0 ; i < n ; i++){
        int num;
        cin>>num;
        a.push_back(num);
    }
    sort(a.begin() , a.end());
    float avg = 0;
    for (int i = 0 ; i < n; ++i)
        avg+=a[i];
    avg/=n;
    if(avg > a[0] && avg < a[n-1])
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    return 0;
}
