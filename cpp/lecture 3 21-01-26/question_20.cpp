#include<iostream>
using namespace std;

int main(){
    int n=7;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(
                (i==0 && j==3) ||
                (i==1 && (j==2 || j==4)) ||
                (i==2 && (j==1 || j==5)) ||
                (i==3 && (j==0 || j==6)) ||
                (i==4 && (j==1 || j==5)) ||
                (i==5 && (j==2 || j==4)) ||
                (i==6 && j==3)
               ){
                cout<<"*";
               }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
