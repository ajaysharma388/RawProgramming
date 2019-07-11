#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < (2*n - 1) ; ++j){
            if(j <= i )
                cout<<j+1<<" ";
            else if(j >= (2*n-1) - (i+1))
                cout<<((2*n - 1) - j)<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
