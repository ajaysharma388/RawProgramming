#include <iostream>

using namespace std;


int checkIfLucky(int d,int b,int n,int *p,int *c){
    int i = 0;
    while(i<n){
        if(p[i]>=d && c[i]<=b)
            return 1;
        ++i;
    }
    return -1;
}
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--){
        int x,y,k,n;
        cin>>x>>y>>k>>n;
        int *pages = new int[n];
        int *cost = new int[n];
        for(int i = 0 ; i < n ; ++i){
            cin>>pages[i]>>cost[i];
        }
        if(checkIfLucky(x-y,k,n,pages,cost)>0)
            cout<<"LuckyChef"<<endl;
        else
            cout<<"UnluckyChef"<<endl;
    }
    return 0;
}
