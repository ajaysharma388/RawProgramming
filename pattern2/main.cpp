#include <iostream>
using namespace std;

int main()
{
    int n,k =1;
    cin>>n;
   /* for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < n ; ++j){
            if(j<=i){
                if(k<10)
                    cout<<k<<"  ";
                else
                    cout<<k<<" ";
                k++;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }*/
    int j = 0;
    while(n--){
        j++;
        int row = 0;
        while(row<j){
            if(k<10)
                cout<<k<<"  ";
            else
                cout<<k<<" ";
            k++;
            row++;
        }
        cout<<endl;
    }
    return 0;
}
