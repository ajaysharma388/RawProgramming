#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; ++i){
        int k = i + 1;
        for(int j = 0 ; j < 2*n - 1 ; ++j){
            if(j >= n-(i+1) && j <= n-1+i){
                cout<<k<<" ";
                if(j < n - 1)
                    k++;
                else
                    k--;
            }else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
