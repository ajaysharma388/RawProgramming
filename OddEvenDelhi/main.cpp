#include<iostream>
using namespace std;
int main() {
    int testcases;
    cin>>testcases;
    while(testcases--){
        int carNumber,sum = 0,n;
        cin>>carNumber;
        n = carNumber;
        while(carNumber>0){
            sum+=carNumber%10;
            carNumber/=10;
        }
        if(n%2==0){
            (sum%4 == 0)? cout<<"Yes"<<endl:cout<<"No"<<endl;
        }else{
            (sum%3 == 0)? cout<<"Yes"<<endl:cout<<"No"<<endl;
        }
        }
	return 0;
}

/*
int sum = 0, carNumber;
        cin>>carNumber;
        while(carNumber>0){
            sum+=carNumber%10;
            carNumber/=10;
        }
        if(sum%2==0){
            (sum%4 == 0)? cout<<"Yes"<<endl:cout<<"No"<<endl;
        }else{
            (sum%3 == 0)? cout<<"Yes"<<endl:cout<<"No"<<endl;
        }*/
