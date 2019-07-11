#include <iostream>

using namespace std;
int main()
{
    int num,a,b,counter;
    cin>>num;
    for(int i = 1 ; i <= num ; i++){
        cin>>a;
        cin>>b;
        for(int j = a ; j <= b ; ++j){
    		counter = 0;
    		for(int i = 2 ; i <= j/2 ;++i){
        	if(j%i == 0)
            	counter = 1;
    	}
    	if(counter == 0)
        	cout<<j<<endl;
    	}
    }
    return 0;
}
