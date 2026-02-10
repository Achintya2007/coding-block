#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int total=2*N+1;

    for(int i=1;i<=total;i++){
        int row=(i<=N+1)?i:(total-i+1);

        if(row==N+1){
            for(int j=N;j>=1;j--)  
			 cout<<j<<" ";
             cout<<"0 ";
            for(int j=1;j<=N;j++)  
			 cout<<j<<" ";
        } else{
            for(int j=N;j>=N-row+1;j--) 
			  cout<<j<<" ";
            for(int s=1;s<=2*(N-row+ 1)-1;s++)  
			  cout<<"  ";
            for(int j=N-row+1;j<=N;j++) 
			 cout<<j<<" ";
        }

        cout<<endl;
    }
    return 0;
}