#include <iostream>

using namespace std;

void fibnacciSeries(int ,int );

int main()
{
    int num;
    cout<<"Enter The Number : ";
    cin>>num;
    fibnacciSeries(num,5);
    return 0;
}

bool checkIfPrime(int num){
    int count = 0;
    for(int i = 0 ; i <= ++i){
        if(num%i==0)
            count++;
    }
    if(count==0)
        return true;
    else
        return false;
}

int Factorial(int num){
    if(num == 0)
        return 1;
    return(num*Factorial(num-1));

}

void fibnacciSeries(int num, int to){
    int temp = num+1;
    for(int i = 0 ; i < to ; i++){
        num = temp+num;
        temp = num+temp;
        cout<<num<<" "<< temp<<" ";
    }
}
