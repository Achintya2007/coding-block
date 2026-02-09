#include<iostream>
using namespace std;

int main(){
    int n=7;
    int mid=n/2;

    for(int i=0;i<n;i++){
        int star=0;
        if(i<=mid){
            star=(2*i)+1;
        }
        else{
            star=2*(n-i-1)+1;
        }
        int space=(n-star)/2;
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for(int k=0;k<star;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}