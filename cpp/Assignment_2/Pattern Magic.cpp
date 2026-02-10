#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int totalRows=2*N-1;

    for(int i=1;i<=totalRows;i++){
        int stars, spaces;

        if(i<=N){
            stars=N-i+1;
            spaces=2*(i-1)-1;
        } else{
            int j=i-N;
            stars=j+1;
            spaces=2*(totalRows-i)-1;
        }

        if(spaces<0){
            for(int s=0;s<2*N-1;s++) 
			cout<<"*";
        } else{
            for(int s=0;s<stars;s++)
			 cout<<"*";
            for(int s=0;s<spaces;s++) 
			 cout<<" ";
            for(int s=0;s<stars;s++) 
			 cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}