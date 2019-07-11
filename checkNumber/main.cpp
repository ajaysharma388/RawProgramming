#include <iostream>
using namespace std;
bool checkIfPower(int);
bool checkIfBitLevel(int);
int main()
{
    int num;
    cout<<"Enter The Number : ";
    cin>>num;
    if(checkIfBitLevel(num))
        cout<<"This Number is a power of 2."<<endl;
    else
        cout << "This number is not power of 2."<< endl;
    return 0;
}

bool checkIfPower(int num){
    if(num == 0)
        return false;
    else
        while(num%2 == 0){
            cout<<num<<endl;
            num = num/2;
        }
    return (num == 1);
}

bool checkIfBitLevel(int x){
        return (x && !(x & x-1));
}


