#include <iostream>

using namespace std;

int main()
{
    int n,k,m = 0;
    cin>>n;
    k = (2*n-1)/2;
    for(int i = 0 ; i < n ; ++i){
        int l = m+1;
        for(int j = 0 ; j < 2*n-1 ;++j){
            if(j >= k && j <= (2*n-1)/2 - m){
                cout<<l<<" ";
                l--;
            }else if(j>= (2*n-1)/2 + m && j < 2*n-1 - k && (i!= 0 && i!=n-1)){
                l++;
                cout<<l<<" ";
            }else
                cout<<"  ";
        }
        cout<<endl;
        if(i<n/2){
            k-=2;
            m++;
        }else{
            k+=2;
            m--;
            }
    }
    return 0;
}

