#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 1 ; i <= n ; ++i){
        for(int j = 1 ; j < 2*n ; ++j){
            if(i == 1 && j >= n)
                cout<<"*";
            else if(i == n && j <= n)
                cout<<"*";
            else if(j == n-(i-1) || j == (2*n - i))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}