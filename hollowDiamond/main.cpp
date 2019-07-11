#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < n ; ++j){
            if(j <= (n/2-i) || j >= (n/2+i))
                cout<<"* ";
            else if(j <= (i - n/2) || j >= n - ((i - n/2) + 1)  && i > n/2)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<"\n";
    }
    return 0;
}
