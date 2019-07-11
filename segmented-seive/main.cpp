#include <iostream>
#include <vector>
#define range 500000

using namespace std;
vector<int> segmentedSieve(int);

vector<int> segmentedSieve(int num){
    vector<int> list;
    int current;
    int Arr[range-2];
    for(int i = 0 ;i <= range-2 ; ++i)
        Arr[i] = i+2;
    for(current = 0 ; current <= range-2 ; ++current)
        if(Arr[current] != 0 ){
            int i = current+Arr[current];
            while(i <= range-2){
                if(Arr[i] != 0)
                    Arr[i] = 0;
                i+=Arr[current];
            }
        }
        for(int i = 0 ;i <= range-2 ; ++i)
           if(Arr[i] != 0 && Arr[i] <= num)
                list.push_back(Arr[i]);
        return list;
}

int main(){
    vector<int> primeList;
    int num;
    cin>>num;
    primeList = segmentedSieve(num);
    for(unsigned int i = 0 ; i < primeList.size() ; ++i)
        cout<<primeList[i]<<" ";
    return 0;
}
