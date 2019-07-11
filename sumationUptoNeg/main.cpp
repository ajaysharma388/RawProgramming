#include <iostream>

using namespace std;

int main()
{
    int n,sum = 0;
    cin>>n;
    while(sum>0){
        sum+=n;
        cout<<n<<"\n";
        cin>>n;
    }
    cout << "Hello world!" << endl;
    return 0;
}
