#include<iostream>
int main() {
	int testCases;
    std::cin>>testCases;
    while(testCases--){
        int n,sume = 0 , sumo = 0;
        std::cin>>n;
        while(n>0){
            if((n%10)%2 == 0)
                sume+=n%10;
            else
                sume+=n%10;
            n/=10;
        }
        if(sume % 4 == 0)
            std::cout<<"Yes"<<std::endl;
        else if(sumo % 3 == 0)
            std::cout<<"Yes"<<std::endl;
        else
            std::cout<<"No"<<std::endl;
    }
    return 0;
}
