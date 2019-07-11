#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int *coords = new int[2];
	string s ;
	cin>>s;
	for(int i = 0 ; i < s.length() ; ++i){
        if(s[i] == 'E')
            coords[0]++;
        else if(s[i] == 'W')
            coords[0]--;
        else if(s[i] == 'N')
            coords[1]++;
        else
            coords[1]--;
	}

	cout<<"The shorted route is for location -> ("<<coords[0]<<" , "<<coords[1]<<")\n";
	while(coords[0]>0){
		coords[0]--;
		cout<<"E";
	}
	while(coords[1]>0){
		coords[1]--;
		cout<<"N";
	}
	while(coords[0]<-1){
		coords[0]++;
		cout<<"W";
	}
	while(coords[1]<-1){
		coords[1]++;
		cout<<"S";
	}
	return 0;
}
