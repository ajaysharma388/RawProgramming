#include <iostream>
#include <stdlib.h>
using namespace std;
void rec(int );
int main()
{
    int n;
    cout <<"Enter The Number :";
    cin >> n;
    rec(n);
    return 0;
}

void rec(int num){
    if(num == 0)
        exit(1);
    cout <<" "<< num;
    rec(num-1);
}
