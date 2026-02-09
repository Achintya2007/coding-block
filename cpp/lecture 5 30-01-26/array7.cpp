//<-------reverse the array---------->
#include<iostream>
using namespace std;
int reverse(int arr[],int n){
     int b=0;
     int e=n-1;
     while(e>b){
        int temp=arr[1];
        arr[1]=arr[0];
        arr[0]=temp;
     }
     b++;
     e--;

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
    cout<<"reverse of array"<<endl;
    for(int i=n-1;i>=0;i--){
       cout<<arr[i]<<" ";
    }
    cout<<reverse(arr,n);
    return 0;
    
}