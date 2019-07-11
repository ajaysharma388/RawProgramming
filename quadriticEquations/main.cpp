#include <iostream>

using namespace std;

int main()
{
    int a,b,c,p = 2;
    cin>>a>>b>>c;
    int d = b*b - 4*a*c;
    float inc = 1,ans = 0;
    if(d<0)
        cout<<"Imaginary";
    else{
        while(p>=0){
            while(ans*ans<=d)
                ans+=inc;
            ans-=inc;
            inc/=10;
            p--;
        }
        float r1 = ((-1)*b-ans)/2.0*a;
        float r2 = ((-1)*b+ans)/2.0*a;
        if(r1 != r2){
            cout<<"Real and Distinct\n"<<r1<<" "<<r2;
        }else{
            cout<<"Real and Equal\n"<<r1<<" "<<r2;
        }
    }
    return 0;
}
