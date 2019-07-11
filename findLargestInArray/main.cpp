#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n,temp;
	cin>>n;
	vector<int> vec;
	vec.reserve(n);
	for(int i = 0 ; i < n ; ++i){
		cin>>temp;
		vec.push_back(temp);
	}
	sort(vec.begin(),vec.end());
	cout<<vec.back()<<endl;
	return 0;
}
