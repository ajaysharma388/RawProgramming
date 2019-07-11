#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; ++j){
            if(i >= 2 && j > 0 && j < i)
                cout<<"0 ";
            else if(j <= i )
                cout<<i+1<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
