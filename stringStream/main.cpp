#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream s(str);
    vector<int> v;
    int a = 0;
    char ch;
    int temp;
    s >> a >> ch;
    do{
    cout<<a<<endl;
    temp = a;
    s >> a >> ch;
    }while(temp!= a);
    return v;
}

int main() {
    string str;
    cin >> str;
    cout<<str[2];
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}
