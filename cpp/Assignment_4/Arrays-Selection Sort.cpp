#include<iostream>
using namespace std;

void selectionSort(int arr[],int N){
    for(int i=0;i<N-1;i++){
        int minIndex=i;
        for(int j=i+1;j<N;j++){
            if(arr[j]<arr[minIndex])
                minIndex=j;
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
}

int main(){
    int N;
    cin>>N;

    int arr[N];
    for(int i=0;i<N;i++)
        cin>>arr[i];

    selectionSort(arr, N);

    for(int i=0;i<N;i++)
        cout<<arr[i]<<endl;

    return 0;
}