#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout<<"Size of vector is "<<v.size()<<endl;
    int n,temp;
    cout<<"Enter how many elements you want to enter : ";
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>temp;
        v.push_back(temp);// this is very helpful function to insert the element at the end of the vector.
    }
    cout<<"Size of vector is "<<v.size()<<endl;
    int choice;
    cout<<"Do you want to print Elements for vector."<<endl;
    cout<<"1 => Yes.\n2 => No.\n"<<"Enter Your Choice : ";
    cin>>choice;
    switch(choice){
        case 1: {
            for(int i = 0 ; i < n ; ++i)
                cout<<"v["<<i<<"] => "<<v[i]<<endl;
            break;
        }
        case 2:{
            cout<<"ok bye!"<<endl;
            break;
        }
    }
    return 0;
}
