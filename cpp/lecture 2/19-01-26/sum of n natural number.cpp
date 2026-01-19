#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int sum_n_no=0;
    for(int i=1;i<=n;i++){
        sum_n_no+=i;
        cout<<"sum of n number is "<<sum_n_no<<endl;
    }
    return 0;
}