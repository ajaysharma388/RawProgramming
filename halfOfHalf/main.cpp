#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int testCases;
	cin>>testCases;
	while(testCases--){
		string s;
		cin>>s;
		for(int i = 0 ; i <  s.length()/2 ; i+=2){
            cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}
