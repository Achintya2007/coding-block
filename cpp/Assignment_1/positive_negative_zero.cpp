#include<iostream>
using namespace std;

int main(){
    long N;
    cin>>N;

    if(N>0){
       cout<<"Positive";
    }
    else if(N<0){
       cout<<"Negative";
    }
    else{
        cout<<"Zero";
    }
    return 0;
}