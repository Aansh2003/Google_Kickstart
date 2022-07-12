/*
 You are a contestant on a popular new game show and are playing for the grand prize!

There are two big buttons, a red one and a black one. You will make a sequence of exactly N button presses.

There are lots of different sequences of presses you could make, but there are P forbidden prefixes, each of length no greater than N. If you make a sequence of presses which begins with any of the forbidden sequences, you will not win the grand prize. It is fine for your sequence to contain one or more forbidden prefixes as long as they do not appear at the start of your sequence.

A winning sequence must consist of exactly N button presses and must not begin with one of the forbidden prefixes. How many different winning sequences are there? 

Sample input:
3
3 2
BBB
RB
5 1
R
4 3
R
B
RBRB

Expected output:
Case #1: 5
Case #2: 16
Case #3: 0
*/


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
