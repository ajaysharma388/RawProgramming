#include <iostream>

using namespace std;

int checkIfHappy(int *a,int n,int c){
    int sum = 0,i = 0;
    while(i < n){
        sum+=a[i];
        if(sum>c)
            return -1;
        ++i;
    }
    if(sum<=c)
        return 1;
    else
        return -1;
}

int main()
{
    int testCases;
    cin>>testCases;
    while(testCases--){
        int numberOfCandies,numberOfElephants;
        cin>>numberOfElephants>>numberOfCandies;
        int *a = new int[numberOfElephants];
        for(int i = 0 ; i < numberOfElephants ; ++i)
            cin>>a[i];
        if(0<checkIfHappy(a,numberOfElephants,numberOfCandies))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
