#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int> integers = parseInts(s);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    cout << "Hello world!" << endl;
    return 0;
}
