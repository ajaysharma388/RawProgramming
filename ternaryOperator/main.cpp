#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int i = 0, j = 0 , n;
	cin>>n;
	for(i = 0;i<n;++i){
		for(j = 0;j<n;++j)
			(i%2==j%2)? (j<=i)?cout<<"1":cout<<" ": (j<=i)?cout<<"0":cout<<" ";
		cout<<endl;
	}
	return 0;
}
