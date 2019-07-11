#include <iostream>

using namespace std;

int main()
{
    int a = 3,b = 5;
    int n ;
    long long sum = 0;
    cin>>n;
    for(int i = 3 ; i < n ; ++i){
        if(i%3 == 0 && i%5 == 0){
            cout<<i<<endl;
            sum+=i;
        }
        if(i%3 == 0 && i%5 != 0){
            cout<<i<<endl;
            sum+=i;
        }
        if(i%3 != 0 && i%5 == 0){
            cout<<i<<endl;
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}
