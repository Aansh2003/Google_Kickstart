

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int test,j;
    cin>>test;
    int out[test];
    for(j=0;j<test;j++){
        int N,P,i;
        cin>>N>>P;
        string P_string[P];
        long number[P],output,num=0;
        for(i=0;i<P;i++){
            cin>>P_string[i];
            number[i]=P_string[i].length();
            if(number[i]==N){
                num+= 1;
            }
            else{
                num += pow(2,N-number[i]);
            }
        }
        output = pow(2,N)-num;
        if(output<0){
            output = 0;
        }
        out[j]=output;
    }
    for(int m=0;m<test;m++){
        cout<<"Case #"<<m+1<<": "<<out[m]<<endl;
    }
}
