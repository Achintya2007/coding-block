#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    for(int i=1;i<=N;i++){
        for(int t=1;t<=N-i;t++)
            cout<<"   ";

        for(int num=i;num<=2*i-1;num++)
            cout<<num<<"  ";

        for(int num=2*i-2;num>=i;num--)
            cout<<num<<"  ";

        cout<<endl;
    }

    for(int i=N-1;i>=1;i--){
        for(int t=1;t<=N-i;t++)
            cout<<"   ";

        for(int num=i;num<=2*i-1;num++)
            cout<<num<<"  ";

        for(int num=2*i-2;num>=i;num--)
            cout<<num<<"  ";

        cout<<endl;
    }

    return 0;
}