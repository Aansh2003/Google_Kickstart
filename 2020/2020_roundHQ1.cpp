#include <iostream>

int main(){
    unsigned int n,k,s,cases;
    std::cin>>cases>>std::endl;
    for(int i = 1; i<=cases; i++){
        std::cin>>n>>k>>s;
        unsigned int r = n+k;
        unsigned int b = k-s+n-s+k;
        if (r > b){
            std::cout<<"Case #"<<i<<": "<<b<<std::endl;
        }
        else{
            std::cout<<"Case #"<<i<<": "<<r<<std::endl;
        }
    }
}