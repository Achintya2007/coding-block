#include<iostream>
using namespace std;

int main(){
    int decimal=0,binary,bass=1;
    cin>>binary;
    while(binary>0){
        int a=binary%10;
        decimal=decimal+a*bass;
        bass=bass*2;
        binary=binary/10;
    }
    cout<<decimal;
    return 0;
}
