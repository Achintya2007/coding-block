#include<iostream>
using namespace std;

int findIndex(long arr[],int N,long M){
    for(int i=0;i<N;i++){
        if(arr[i]==M){
            return i;
        }
    }
    return -1;
}

int main(){
    int N;
    cin>>N;

    if(N<=0){
        return 0;
    }

    long arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    long M;
    cin>>M;

    cout<<findIndex(arr,N,M);
    return 0;
}