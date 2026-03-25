#include<iostream>
using namespace std;

void reverseArray(long arr[],int N){
    int start=0,end=N-1;
    while(start<end){
        long temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
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

    reverseArray(arr,N);

    for(int i=0;i<N;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}