#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int mid=(N+1)/2;

    for(int i=1;i<=N;i++){
        int row=i<=mid?i:N-i+1;

        for(int s=1;s<=mid-row;s++) 
		 cout<<"    ";

        for(int j=row;j>=1;j--) 
		 cout<<j << " ";

        if(row>1){
            for(int s=1;s<=2*(row-1)-1;s++)  
			 cout<<"  ";
            for(int j=1; j<=row;j++) 
			 cout<<j <<" ";
        }

        cout<<endl;
    }

    return 0;
}