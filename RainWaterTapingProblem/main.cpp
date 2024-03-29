#include<iostream>
using namespace std;
int findWaterVolume(int arr[],int n){
    int left[n],right[n],waterVolume = 0;
    left[0] = arr[0];
    for(int i = 1 ; i < n ; ++i)
        left[i] = max(left[i-1],arr[i]);
    right[n-1] = arr[n-1];
    for(int i = n-2 ; i >= 0 ; --i)
        right[i] = max(right[i+1],arr[i]);
    for(int i = 0 ; i < n ; ++i)
        waterVolume+=min(left[i],right[i])-arr[i];
    return waterVolume;
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0 ; i < n ; ++i)
        cin>>arr[i];
    cout<<findWaterVolume(arr,n)<<endl;
    return 0;
}
