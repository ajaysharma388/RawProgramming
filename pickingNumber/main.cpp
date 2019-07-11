#include <iostream>

using namespace std;
int pickingNumbers(int , int* );
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i < n ; ++i)
        cin>>a[i];
    cout<<pickingNumbers(n, a);
    return 0;
}

int pickingNumbers(int a_count, int* a) {
    int max = 0,count_1 = 0,count_2 = 0;
    for(int i = 0 ; i < a_count-1 ; ++i){
        for (int j = i+1; j < a_count ;++j){
            if(*(a+j) - *(a+i) <= 1 && *(a+j) - *(a+i) >= 0)
                count_1++;
            if(*(a+j)-*(a+i) >= -1 && *(a+j) - *(a+i) <= 0)
                count_2++;
            }
        //if(i == 0){
        //    cout<<count_1<<" "<<count_2<<endl;
        //}
        if(count_1 >= count_2 && max < count_1)
            max = count_1;
        if(count_1 <= count_2 && max < count_2)
            max = count_2;
        count_1 = 0;
        count_2 = 0;
        cout<<max<<endl;
    }
    return max+1;
}
