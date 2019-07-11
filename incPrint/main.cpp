#include <iostream>

using namespace std;

void incPrint(int);
int main()
{
    int n;
    cout << "Enter The Number : ";
    cin >> n;
    incPrint(n);
    return 0;
}

void incPrint(int num){
    if(num == 0)
        return;
    incPrint(num-1);
    cout <<num << " " ;
}
