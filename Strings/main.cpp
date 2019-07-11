#include <iostream>

using namespace std;

int main()
{
    char height[] = {1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 7};
    char ch[] = "aba";
    int max = (int ) ch[0];
    char cha = ch[0];
    //cout << ch << endl;
    for(int i = 1 ; i < 10 ; ++i){
        if(max < (int )ch[i]){
            max = (int )ch[i];
            cha = ch[i];
        }
    }

    cout<<cha<<" : "<<max<<endl;
    cout<<max-97<<endl;
    return 0;
}
