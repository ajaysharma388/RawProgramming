#include<iostream>
using namespace std;

int factorial(int);
int factorial(int n){
	if(n == 0)
		return 1;
	return (n*factorial(n-1));
}

int main(){
	int num;
	cin>>num;
	cout<<"Factorial of the number is : " <<factorial(num) <<endl;
	return 0;
}

