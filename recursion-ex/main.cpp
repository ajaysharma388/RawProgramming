#include <iostream>

using namespace std;

void decPrint(int);
int main()
{
    int n;
    cout << "Enter The Number : ";
    cin >> n;
    decPrint(n);
    return 0;
}

void decPrint(int num){
    if(num == 0)
        return;
    cout <<num << " " ;
    decPrint(num-1);
}
