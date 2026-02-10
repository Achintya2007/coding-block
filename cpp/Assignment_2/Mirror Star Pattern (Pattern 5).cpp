#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    int mid=N/2+1;

    for(int i=1; i<=N;i++){
        int stars, tabs;

        if(i<=mid){
            tabs=mid-i;
            stars=2*i-1;
        } else{
            tabs=i-mid;
            stars=2*(N-i)+1;
        }

        for(int t=1; t<=tabs;t++)
            cout<<"   ";

        for(int s=1;s<=stars;s++)
            cout<<"*  ";

        cout<<endl;
    }

    return 0;
}