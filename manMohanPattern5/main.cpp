#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; ++i){
        int x = i + 1;
        int k = i * 2;
        for(int j = 0 ; j < 2*n-1 ; ++j){
            if(j >= (n-(1+i)) && j < n){
                cout<<x<<" ";
                x++;
            }else if(j >(n-1) && k >= i+1){
                cout<<k<<" ";
                k--;
            }
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
