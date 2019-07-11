#include <iostream>
#include <string>

using namespace std;

int main() {
	// your code goes here
	int testCases;
	cin>>testCases;
	while(testCases--){
        int i,j,k,l;
        cin>>i>>j>>k>>l;
        int x = 2 - k,y = 2 - l;
        for(int m = 0 ; m <= ((1+k)*i); m++){
            for(int n = 0 ; n <= ((1+l)*j) ; n++){
                if(((((n+1) % (l+1) == 0) || (((n+l) % (l+1) == 0) && l == 2)) &&
                    (((m+1) % (k+1) == 0) || (((m+k) % (k+1) == 0) && k == 2)))
                && ((n > 0 && m > 0) && ((n < 3*j-y) && (m < 3*i-x))))
                    cout<<".";
                else
                    cout<<"*";
            }
            cout<<endl;
        }
    }
	return 0;
}

