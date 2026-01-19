#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"enter the first number:";
    cin>>num1;
    cout<<"enter the second number:";
    cin>>num2;
    if(num1>num2)
       cout<<"maximum number is "<<num1;
    else
       cout<<"maximum number is "<<num2;
    
    return 0;
}