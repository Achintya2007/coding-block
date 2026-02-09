#include<iostream>
using namespace std;

int sec_max(int arr[],int n){
    int temp=0;
    for(int i=0;i<n;i++){
           if(temp>arr[i]){
            temp=arr[i];
        }
    }
    cout<<" number of the array is :"<<temp;
   return 0;
}

int main(){
    cout<<"Length of the array :"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Input number of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sec_max(arr,n);

    return 0;
}