#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char ch;
    bool flag = true;
    while(flag){
        cin>>ch;
        switch(ch){
            case '+':   cin>>a>>b;
                        cout<<a+b<<endl;
                        break;
            case '-':   cin>>a>>b;
                        cout<<a-b<<endl;
                        break;
            case '%':   cin>>a>>b;
                        cout<<a%b<<endl;
                        break;
            case '*':   cin>>a>>b;
                        cout<<a*b<<endl;
                        break;
            case '/':   cin>>a>>b;
                        cout<<a/b<<endl;
                        break;
            default:    flag = false;
                        cout<<"Invalid operation. Try again."<<endl;
                        break;
            }
    }
    return 0;
}
