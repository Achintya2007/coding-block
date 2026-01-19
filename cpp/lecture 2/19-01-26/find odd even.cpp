#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter the number:";
    cin>>num;
    if(num % 2 ==0)
       cout<<"even number is "<<num;
    else
       cout<<"odd number is "<<num;
    
    return 0;
}