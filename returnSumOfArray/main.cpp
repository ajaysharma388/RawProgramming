#include <iostream>
using namespace std;

int sumOfArray(int a[],int n){
    int sum = 0;
    for(int i = 0 ; i < n ; ++i)
        sum+=a[i];
    return sum;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<<sumOfArray(a,10)<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
