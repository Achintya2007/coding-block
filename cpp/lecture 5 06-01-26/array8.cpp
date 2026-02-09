//<-------reverse the array---------->
#include<iostream>
using namespace std;
int reverse(int arr[],int n){
    cout<<"reverse of array"<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }

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
    reverse(arr,n);
    return 0;
    
}