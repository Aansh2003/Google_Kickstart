#include <iostream>
using namespace std;

int Calculator(int count,int arr[],int H_score){
    int c=0;
    if(H_score == 0){
        return 1;
    }
    for(int i=0;i<=count;i++){
       if(arr[i]>H_score) {
           c++;
       }
    }
    if(c>H_score){
        return 1;
    }
    return 0;
}
int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int N;
        cin>>N;
        int A[N],H_index[N+1],output=0;
        for(int j=0;j<N;j++){
            cin>>A[j];
        }
        H_index[0] = 0;
        //sort(A,A+N,greater<int>());
        cout<<"Case #"<<i+1<<": ";
        for(int k=0;k<N;k++){
            H_index[k+1] = H_index[k]+Calculator(k,A,H_index[k]);
            output = H_index[k+1];
            if(k==N-1){
                cout<<output;
            }
            else{
                cout<<output<<" ";
            }
        }
        cout<<endl;
    }
}
