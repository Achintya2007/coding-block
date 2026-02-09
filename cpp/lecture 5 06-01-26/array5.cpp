//----liner searching-----------
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"length of the array :";
    cin>>n;
    int arr[n];
     cout<<"Input number of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int search_number;
    cout<<"enter the number which you want to search : ";
    cin>>search_number;
    int count=0;
    for(int i=0;i<6;i++){
        if(arr[i]==search_number){
            count++;
        }
    }
    cout<<"count number of the search element : "<<count;
    
}