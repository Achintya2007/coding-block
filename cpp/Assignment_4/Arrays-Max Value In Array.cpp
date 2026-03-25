#include<iostream>
using namespace std;

 long findMax(long arr[],int n){
     long maxVal=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>maxVal){
            maxVal=arr[i];
        }
    }
    return maxVal;
}

int main(){
    int n;
    cin>>n;

    if(n<=0){
        return 0;
    }

    long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<findMax(arr, n);
    return 0;
}