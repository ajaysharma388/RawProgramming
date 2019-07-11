#include <iostream>

using namespace std;

int main()
{
    int n,con = 0;
    cin>>n;
    while(n>0){
        con += (n%8);
        con *= 10;
        n /= 8;
    }
    con/=10;
    while(con>0){
        cout<<con%10;
        con /= 10;
    }
    return 0;
}
