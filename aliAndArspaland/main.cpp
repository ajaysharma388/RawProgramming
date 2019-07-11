#include <iostream>
using namespace std;
int main(){
    char ar[9];
    char vowel[]={'A','E','I','O','U','Y'};
    cin>>ar;
    for(int i = 0 ; i < 9 ; i++)
        cout<<ar[i];
    cout<<endl;
    if(((ar[0]+ar[1])%2==0) && ((ar[3]+ar[4])%2==0) && ((ar[4]+ar[5])%2==0) && ((ar[7]+ar[8])%2==0))
        for(int i = 0 ; i < 6 ; i++)
            if(ar[3] == vowel[i]){
                cout<<"valid";
            	break;
            }
	else cout<<"invalid";
    return 0;
}
