
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
