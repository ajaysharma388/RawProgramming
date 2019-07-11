#include <iostream>
using namespace std;
void fun(int A[][]){
    for(int j = 0 ; j < size ; j++){
        for(int k = 0 ; k < size ; k++ ){
            result[j][k] = A[j][k];
            cout<<A[j][k]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int num,size;
    cin>>num;
    for(int i = 0 ; i < num ; i++){
        cin>>size;
        int result[size][size];
	    int Arr[size][size];
	    for(int j = 0 ; j < size ; j++){
	        for(int k = 0 ; k < size ; k++ ){
	            cin>>Arr[j][k];
	        }
	    }
	    fun(Arr);
    }
    /*for(int j = 0 ; j < size ; j++){
        for(int k = 0 ; k < size ; k++ ){
            cout<<Arr[j][k]<<" ";
        }
        cout<<endl;
    }
    cout<<"---------------------------"<<endl;
    for(int j = 0 ; j < size ; j++){
        for(int k = 0 ; k < size ; k++ ){
            cout<<Result[j][k]<<" ";
        }
        cout<<endl;
    }*/
	return 0;
}
