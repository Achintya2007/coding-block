#include<iostream>
using namespace std;

int main(){
    cout<<"Length of the array :"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Input number of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<temp){
            temp=arr[i];
        }
    }
    cout<<"smaller number of the array is :"<<temp;
    
}