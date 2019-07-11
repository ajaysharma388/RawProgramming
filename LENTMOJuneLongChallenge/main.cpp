#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void maxCost(vector<int> v , int k, int x , int n){
    int sum = 0,temp = 0;
    for(int i = 0 ; i < n ; ++i)
        sum+=v[i];
    int i = 0 , j = n-1;
    while(k>0 && i<j){
        temp = sum-v[i]-v[j];
        if(temp+(v[i]^x)+(v[j]^x) > sum){
            sum = temp+(v[i]^x)+(v[j]^x);
            k--;
            i++;
            j--;
        }else if(temp+(v[i]^x)+(v[j]^x) == sum){
            if((j-i)/2 < k){
                sum = temp+(v[i]^x)+(v[j]^x);
                k--;
                i++;
                j--;
            }else if((v[i]^x) > (v[j]^x)){
                j--;
            }else{
                i++;
            }
        }else if((v[i]^x) > (v[j]^x)){
            j--;
        }else{
            i++;
        }
    }
    cout<<sum<<endl;
}
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--){
        int n,k,x;
        cin>>n;
        vector<int> vec;
        vec.reserve(n);
        for(int i = 0 ; i < n ; i++){
            cin>>k;
            vec.push_back(k);
        }
        cin>>k>>x;
        //sort(vec.begin(),vec.end());
        maxCost(vec , k , x ,n);
    }
    return 0;
}
