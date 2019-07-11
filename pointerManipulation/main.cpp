#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,testCases;
    cin>>n>>testCases;
    int **A = new int*[n];
    int *a = new int[n];
    for(int i = 0 ; i <n ; ++i){
        cin>>a[i];
        int *p = new int[a[i]];
        for(int j = 0 ; j < a[i] ;++j)
            cin>>p[j];
        A[i] = p;
    }

    for(int i = 0 ; i <n ; ++i){
        int *p = A[i];
        for(int j = 0 ; j < a[i] ; ++j)
            cout<<p[j];
        cout<<endl;
    }
    for(int i = 0 ; i < testCases ; ++i){
        int r,c;
        cin>>r>>c;
        int *p = A[r];
        cout<<p[c]<<endl;
    }

    return 0;
}
