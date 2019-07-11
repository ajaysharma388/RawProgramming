#include <iostream>

using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;
    float inc = 1,ans = 0;
    while(p>=0){
        while(ans*ans<=n)
            ans+=inc;
        ans-=inc;
        inc/=10;
        p--;
        //cout<<ans<<endl;
    }
    cout<<ans<< " : " <<ans*ans<<endl;
    return 0;
}
