#include <iostream>
#include <cmath>
using namespace std;

bool checkIfPrime(int n){
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}
void generatePrimes(int till){
    for(int i = 2 ; i <= till ; ++i){
        if(checkIfPrime(i))
            cout<<i<<" ";
    }
    return;
}
int main()
{
    int n;
    cout<<"Enter Number upto which you want Primes"<<endl;
    cin>>n;
    generatePrimes(n);
    //cout<<"Enter The Number : ";
    //cin>>n;
    //if(checkIfPrime(n))
    //    cout<<"The Number "<<n<<" is Prime."<<endl;
    //else
    //    cout<<"The Number "<<n<<" is not Prime."<<endl;
    return 0;
}
