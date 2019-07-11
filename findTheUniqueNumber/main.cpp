#include <iostream>

using namespace std;

int main()
{   int n;
    cout<<"Enter The Size Of Array : ";
    cin>>n;
    int *A = new int[n];
    for(int i = 0 ; i < n ; ++i)
        cin>>A[i];
    int num = 0;
    for(int j = 0 ; j < n-1 ; ++j)
        num = A[j]^A[j+1];
    cout << "Unique Number is " <<num <<"\n";
    return 0;
}
