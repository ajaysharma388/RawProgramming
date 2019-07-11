#include <iostream>
#include <stdlib.h>
using namespace std;
void rec(int ,int);
int main()
{
    int n;
    cout <<"Enter The Number :";
    cin >> n;
    rec(1, n);
    return 0;
}

void rec(int a ,int num){
    if(a == num){
        cout<<" "<<a;
        exit(0);
    }
    cout <<" "<<a;
    rec(++a, num);
}
