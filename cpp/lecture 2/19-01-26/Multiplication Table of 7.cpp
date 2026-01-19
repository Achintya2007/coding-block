#include<iostream>
using namespace std;

int main(){
    int n ,num;
    cout<<"enter the table number which you want to print:";
    cin>>n;
    for(int i=1;i<=10;i++){
        num=i*n;
        cout<<i<<"*"<<n<<"="<<num<<endl;
    }
    return 0;
}