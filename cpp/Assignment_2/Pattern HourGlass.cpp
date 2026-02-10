#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int total=2*N+1;

    for(int i=0;i<total;i++){
        int row=(i<=N)?i:(total-1-i);

        for(int s=0;s<row;s++) {
            cout<<"  ";
        }

        for(int j=N-row;j>=0;j--) {
            cout<<j<<" ";
        }
        
        for(int j=1;j<=N-row;j++) {
            cout<<j<<" ";
        }

        cout<<endl;
    }
    return 0;
}