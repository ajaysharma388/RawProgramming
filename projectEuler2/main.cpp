#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long a = 1,b = 2,sum = 0;
	while(true){
		long long temp = a;
		a = b;
		b = (temp + a);
		if(b%2==0){
			sum+=b;
		}
		if(b>=4000000)
			break;
	}
	cout<<sum+2;
	return 0;
}
