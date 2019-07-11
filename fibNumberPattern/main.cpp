#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a = 0 , b = 1 , c = a+b , n;
    cin>>n;
    cout<<a<<endl;
    cout<<b<<"  "<<c<<endl;
    a = b;
    b = c;
    c = a + b;
    for(int i = 2  ; i < n ; ++i){
        for(int j = 0  ; j <= i ;++j){
            cout<<c<<"  ";
            a = b;
            b = c;
            c = a + b;
        }
        cout<<endl;
    }
    return 0;
}
