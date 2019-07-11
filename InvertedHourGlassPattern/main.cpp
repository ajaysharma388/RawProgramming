#include <iostream>

using namespace std;

int main()
{
    int n,k = 0;
    cin>>n;
    for(int i = 0 ; i <= 2*n ; ++i){
        for(int j = 0 ; j <= 2*n ; ++j){
            if(j <= k)
                cout<<(n-j)<<" ";
            else if(j>=2*n-k)
                cout<<(j-n)<<" ";
            else
                cout<<"  ";
        }
        if(i<n)
            k++;
        else
            k--;
        cout<<endl;
    }
    return 0;
}
