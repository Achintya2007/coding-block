#include<iostream>
using namespace std;

int main(){
    int n ,num=1;
    cout<<"enter the number which you want to factorial:";
    cin>>n;
     for(int i=1;i<=n;i++){
        num*=i;
    }
    cout<<"factorial of "<<n<<" is "<<num<<endl;
    return 0;
}