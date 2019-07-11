#include <iostream>

using namespace std;

int pow(int num){
    int p = 1;
    for(int i = 1 ; i <= num ; ++i) // this function returns the power of
        p*=num;                       // the given input number 3^3 = 27
    return p;
}

int pow(int base, int exp){
    int p = 1;
    for(int i = 1 ; i <= exp ; ++i) // this function returns the power of
        p*=base;                       // the given input number 2^3 = 8
    return p;

}

int main()
{
    int a,b,c;
    cout<<"Enter a Number to Find it power : ";
    cin>>a;
    cout<<"The "<<a<<"th power of "<<a<<" is "<<pow(a)<<endl;
    cout<<"Enter a Base Number : ";
    cin>>b;
    cout<<"Enter a the power : ";
    cin>>c;
    cout<<"The "<<c<<" th power of "<<b<<" is "<<pow(b,c)<<endl;
    return 0;
}
