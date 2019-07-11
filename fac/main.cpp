#include <iostream>

using namespace std;
int factorial(int );
int main()
{
    int num;
    cout << "Enter the number : " << endl;
    cin >> num;
    int result = factorial(num);
    cout <<"factorial of "<<num<<" is "<<result;
    return 0;
}

int factorial(int n){
	if(n == 0)
		return 1;
	return (n*factorial(n-1));
}
