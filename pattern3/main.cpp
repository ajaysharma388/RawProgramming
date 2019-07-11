#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    for(i = 0 ; i < n ; ++i){
        int k = 64;
        for(j = 0 ; j < 2*(n-i) ; ++j)
            if(j<n-i){
                k++;
                cout<<(char)k;
            }
            else{
                cout<<(char)k;
                k--;
            }
        cout<<endl;
    }
    return 0;
}
