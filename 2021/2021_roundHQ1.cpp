
/*
You are given a string S which denotes a padlock consisting of lower case English letters. You are also given a string F consisting of set of favorite lower case English letters.
You are allowed to perform several operations on the padlock. In each operation, you can change one letter of the string to the one following it or preceding it in the alphabetical order.
For example: for the letter c, you are allowed to change it to either b or d in an operation. The letters can be considered in a cyclic order, i.e.
,the preceding letter for letter a would be letter z. Similarly, the following letter for letter z would be letter a.
Your aim is to find the minimum number of operations that are required such that each letter in string S after applying the operations, is present in string F.
INPUT EXAMPLE-

2
abcd
a
pqrs
afg

EXPECTED OUTPUT-
Case #1 - 6
Case #2 - 42
*/
#include <iostream>
#include <cstring>
using namespace std;

int Operation(string one,string two,int j,int k){
    int b[one.length()][two.length()];
    b[j][k]= one[j]-two[k];
    if(b[j][k]<0)
    {
        b[j][k] *= -1;
    }
    if((13-b[j][k])<0)
    {
        b[j][k] -= 13;
    }
    else
    {
        b[j][k] = 13 - b[j][k];
    }
    return b[j][k];
}

int Final_value(int smallest){
    if((smallest-13)<=0){
        return 13-smallest;
    }
    return smallest-13;
}

int main()
{
    int i,j,n,number_F,number_S,k,smallest,count,value;
    string S;
    string F;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>S;
        cin>>F;
        count = 0;
        for(j=0;j<S.length();j++)
        {
            for(k=0;k<F.length();k++)
            {
                smallest = 0;
                value = Operation(S,F,j,k);
                if(smallest<value){
                    smallest = value;
                }
            }
            count += Final_value(smallest);
        }
        cout<<"Case #"<<(i+1)<<": "<<count<<endl;
    }
}
