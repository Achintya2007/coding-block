#include<iostream>
using namespace std;

int main(){
    int n=7;
    int mid=n/2;

    for(int i=0;i<n;i++){
        int space=0;
        if(i<=mid){
            space=(2*i)+1;
        }
        else{
            space=2*(n-i-1)+1;
        }
        int star=(n-space)/2;
        for(int j=0;j<star;j++){
            cout<<"*";
        }
        for(int k=0;k<space;k++){
            cout<<" ";
        }
        for(int j=0;j<star;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}