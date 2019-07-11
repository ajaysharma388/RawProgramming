#include <iostream>
using namespace std;

int main() {
	int num,n,n2;
	cin>>num;
        for(int i=0;i<num;i++){
        	cin>>n;
        	cin>>n2;
        	int counter ;
            if(n==1 || n==0)
                n=2;
            for(int i = n ; i <= n2 ; i++){
                counter = 0;
            for(int j = 2 ; j < n2 ; j++){
               if(i % j == 0 && i!=j){
                   counter++;
               }
            }
            if(counter == 0){
                cout<<i<<endl;
            }
        }
        cout<<endl;
        }
	return 0;
}
