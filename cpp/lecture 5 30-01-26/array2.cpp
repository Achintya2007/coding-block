#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the length of array: ";
    cin>>n;
    int arr[n];
    cout<<"input"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"output"<<endl;
    for(int j=0;j<5;j++){
        cout<<arr[j]<<endl;
    }
    return 0;
}