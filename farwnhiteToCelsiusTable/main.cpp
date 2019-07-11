#include <iostream>
#include <stdio.h>
using namespace std;

void fahrenhiteToCelcius(int start , int endTo,int limit){
    cout<<"--------------------------------"<<endl;
    cout<<"|   Fahrenhite   |   Celcius   |"<<endl;
    cout<<"|------------------------------|"<<endl;
    for(int i = 0 ; i <= endTo ; i+=limit){
        if(i<10){
            printf("|       %d        |    %0.2f   |\n",i,(5/9.0)*(i-32));
            cout<<"|------------------------------|"<<endl;
        }else if(i < 100){
            printf("|       %d       |    %0.2f   |\n",i,(5/9.0)*(i-32));
            cout<<"|------------------------------|"<<endl;
        }else{
            printf("|       %d      |    %0.2f     |\n",i,(5/9.0)*(i-32));
                cout<<"--------------------------------"<<endl;
        }
    }
}
void fahrenhiteToCelcius(int start , int endTo){
    cout<<"--------------------------------"<<endl;
    cout<<"|   Fahrenhite   |   Celcius   |"<<endl;
    cout<<"|------------------------------|"<<endl;
    for(int i = 1 ; i <= endTo ; ++i){
        if(i<10){
            printf("|       %d        |    %0.2f   |\n",i,(5/9.0)*(i-32));
            cout<<"|------------------------------|"<<endl;
        }else if(i < 100){
            printf("|       %d       |    %0.2f   |\n",i,(5/9.0)*(i-32));
            cout<<"|------------------------------|"<<endl;
        }else{
            printf("|       %d      |    %0.2f     |\n",i,(5/9.0)*(i-32));
                cout<<"--------------------------------"<<endl;
        }
    }
}

int main()
{
    int start,endTo;
    cin>>start>>endTo;
    fahrenhiteToCelcius(start,endTo);
    fahrenhiteToCelcius(start,endTo,10);
    return 0;
}
