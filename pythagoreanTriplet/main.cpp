#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    if(N<2)
        cout<<"-1"<<endl;
    else if(N%2==0)
        cout<<((N/2)*(N/2) - 1)<<" "<<((N/2)*(N/2) + 1);
    else
        cout<<2*((N+1)/2)*((N-1)/2)<<" "<<((((N+1)/2)*((N+1)/2)) + (((N-1)/2)*((N-1)/2)));
    return 0;
}
