#include <iostream>
#include <string>

using namespace std;

int main()
{
    char ar[9],a = 'N';
    char vowel[]={'A','E','I','O','U','Y'};
    cin>>ar;
    for(int i = 0 ; i < 6 ; i++)
        if(ar[3]==vowel[i])
            a = 'Y';
    if( ((ar[1]+ar[2])%2==0) && ((ar[3]+ar[4])%2==0) && ((ar[4]+ar[5])%2==0) && ((ar[7]+ar[8])%2==0) && a=='N')
        cout<<"valid";
    cout<<"invalid";
    return 0;
}
