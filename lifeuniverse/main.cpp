#include <iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	while(true){
        if(num == 42){
            cout<<num<<endl;
            return 0;
        }
        cout<<num<<endl;
        cin>>num;

	}
	return 0;
}
