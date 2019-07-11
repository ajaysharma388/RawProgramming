#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testCases;
	cin>>testCases;
	while(testCases--){
        int i,j,k;
        cin>>i>>j>>k;
        int _mcount = (k==2)?(4+(i-1)*(k+1)): 3*(i-1);
        int _ncount = (k==2)?(4+(j-1)*(k+1)): 3*(j-1);
        int counterm = 0;
        for(int m = 0 ; m < _mcount; m++){
            int countern = 0;
            for(int n = 0 ; n < _ncount ; n++){
                if(k == 2){
                    if(((m > 0) && (n > 0)) && ((m < _mcount - 1) && (n < _ncount-1)) && (countern%2==0)
                        && (((m % 2 != 0) && (n % 2 != 0)) || ((m % 2 == 0) && (n % 2 == 0))) && (n%3 != 0) && (m%3 != 0) && (counterm%2==0)){
                        cout<<"\\";
                    }else if (((m > 0) && (n > 0)) && ((m < _mcount - 1) && (n < _ncount-1)) && (countern%2==0)
                        && (((m % 2 != 0) && (n % 2 == 0)) || ((m % 2 == 0) && (n % 2 != 0))) && (n%3 != 0) && (m%3 != 0) && (counterm%2==0)){
                        cout<<".";
                    }else if(((m > 0) && (n > 0)) && ((m < _mcount - 1) && (n < _ncount-1)) && (countern%2==0)
                        && (((m % 2 != 0) && (n % 2 != 0)) || ((m % 2 == 0) && (n % 2 == 0))) && (n%3 != 0) && (m%3 != 0) && (counterm%2!=0)){
                        cout<<"/";
                    }else if (((m > 0) && (n > 0)) && ((m < _mcount - 1) && (n < _ncount-1)) && (countern%2==0)
                        && (((m % 2 != 0) && (n % 2 == 0)) || ((m % 2 == 0) && (n % 2 != 0))) && (n%3 != 0) && (m%3 != 0) && (counterm%2!=0)){
                        cout<<".";
                    }else if(((m > 0) && (n > 0)) && ((m < _mcount - 1) && (n < _ncount-1)) && (countern%2!=0)
                        && (((m % 2 != 0) && (n % 2 != 0)) || ((m % 2 == 0) && (n % 2 == 0))) && (n%3 != 0) && (m%3 != 0) && (counterm%2==0)){
                        cout<<"/";
                    }else if (((m > 0) && (n > 0)) && ((m < _mcount - 1) && (n < _ncount-1)) && (countern%2!=0)
                        && (((m % 2 != 0) && (n % 2 == 0)) || ((m % 2 == 0) && (n % 2 != 0))) && (n%3 != 0) && (m%3 != 0) && (counterm%2==0)){
                        cout<<".";
                    }else if(((m > 0) && (n > 0)) && ((m < _mcount - 1) && (n < _ncount-1)) && (countern%2!=0)
                        && (((m % 2 != 0) && (n % 2 != 0)) || ((m % 2 == 0) && (n % 2 == 0))) && (n%3 != 0) && (m%3 != 0) && (counterm%2!=0)){
                        cout<<"\\";
                    }else if (((m > 0) && (n > 0)) && ((m < _mcount - 1) && (n < _ncount-1)) && (countern%2!=0)
                        && (((m % 2 != 0) && (n % 2 == 0)) || ((m % 2 == 0) && (n % 2 != 0))) && (n%3 != 0) && (m%3 != 0) && (counterm%2!=0)){
                        cout<<".";
                    }else
                        cout<<"*";
                }else{
                    if((n % 2 != 0) && ((m > 0) && (n > 0)) && ((m < _mcount - 1)
                        && (n < _ncount-1)) && (m % 2 != 0) && (countern % 2 != 0) && (counterm % 2 == 0)){
                        cout<<"\\";
                        countern++;
                    }else if((n % 2 != 0) && ((m > 0) && (n > 0)) &&
                             ((m < _mcount - 1) && (n < _ncount-1)) && (m % 2 != 0) && (counterm % 2 == 0)){
                        cout<<"/";
                        countern++;
                    }else if((n % 2 != 0) && ((m > 0) && (n > 0)) && ((m < _mcount - 1)
                        && (n < _ncount-1)) && (m % 2 != 0) && (countern % 2 != 0) && (counterm % 2 != 0)){
                        cout<<"/";
                        countern++;
                    }else if((n % 2 != 0) && ((m > 0) && (n > 0)) &&
                             ((m < _mcount - 1) && (n < _ncount-1)) && (m % 2 != 0) && (counterm % 2 != 0)){
                        cout<<"\\";
                        countern++;
                    }else
                        cout<<"*";
                }
                if(n%3==0 && k==2)
                    countern++;
            }
            if(counterm<2 && k!=2)
                counterm++;
            else if(m%3==0)
                counterm++;
            cout<<endl;
        }
        cout<<endl;
    }
	return 0;
}

