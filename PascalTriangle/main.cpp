#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; ++i){
        int k = 1,m = 0 ,temp = 1;
        for(int j = 0 ; j < 2*n ; ++j){
            if(j >= n-i-1 && j <= (n+i) && ((i%2!=0 && j%2==0) || (i%2==0 && j%2!=0))){
                if(i<2 || j == n-i && n%2!=0){
                    cout<<k;
                }else if(i<2 || j == n-i-1 && n%2==0){
                    cout<<k;
                }else{
                    temp = temp*(i-m)/k;
                    cout<<temp;
                    m++;
                    k++;
                }
            }else
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

