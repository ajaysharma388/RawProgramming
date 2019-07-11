#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1,vec2;
    int n,temp;
    cin>>n;
    for(int i = 0 ; i < n ; ++i){
        cin>>temp;
        vec1.push_back(temp*temp);
    }
    cout << "Size of vector 2 before swap : " << vec2.size() << endl;
    vec2.swap(vec1);
    cout << "Size of vector 2 after swap : " << vec2.size() << endl;
    cout<<"Now, vec2 contains.\n";
    for(vector<int>::iterator it = vec2.begin() ; it != vec2.end() ; ++it){
        cout<<*it<<" ";
    }
    cout<<"\n";
    return 0;
}
