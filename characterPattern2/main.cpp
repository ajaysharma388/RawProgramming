#include <iostream>
#include <string>

using namespace std;

int main() {
	// your code goes here
	int testCases;
	cin>>testCases;
	while(testCases--){
        int i,j;
        cin>>i>>j;
        for(int m = 0 ; m < i ; m++){
            for(int n = 0 ; n < j ; n++){
                if((m > 0 && n > 0) && (m < i-1 && n < j-1))
                    cout<<".";
                else
                    cout<<"*";
            }
            cout<<endl;
        }
	}
	return 0;
}
