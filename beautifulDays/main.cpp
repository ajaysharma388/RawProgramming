#include <iostream>

using namespace std;
int beautifulDays(int , int , int );
int main()
{

    int i,j,k;
    i = 20;
    j = 23;
    k = 6;
    cout<<beautifulDays(i, j, k);
    return 0;
}
int beautifulDays(int i, int j, int k) {
    int beautifulDay = 0;
    for(int z = i ; z <= j ; ++z){
        int c,rev = 0;
        c = z;
      while(c > 0){
    	rev*=10;
    	rev = rev + c%10;
    	c /=10;
        }
        if((rev-z)%k==0)
            beautifulDay++;
        }
    return beautifulDay;
}
