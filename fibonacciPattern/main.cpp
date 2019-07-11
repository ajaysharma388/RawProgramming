#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 0 , b = 1 , c = a+b , n;
    cin>>n;
    cout<<a<<endl;
    cout<<b<<setw(n)<<c<<endl;
    a = b;
    b = c;
    c = a + b;
    bool flag = false;
    for(int i = 2  ; i < n ; ++i){
        for(int j = 0  ; j <= i ;++j){
            if(j == 0 && c < 10)
                cout<<c;
            else if(j == 0 && c > 10){
                cout<<c;
                flag = true;
            }else if(c < 10)
                cout<<setw(2*n)<<c;
            else if(c < 10)
                cout<<setw(2*n)<<c;
            else if(c > 10 && flag)
                cout<<setw(2*n)<<c;
            else
                cout<<setw(2*n)<<c;
            a = b;
            b = c;
            c = a + b;
        }
        cout<<endl;
    }
    return 0;
}
