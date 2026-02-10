#include<iostream>
using namespace std;

int main() {
     int N;
	 cin>>N;
	 for(int i=1;i<=N;i++){
         for(int s=1;s<=N-i;s++){
			 cout<<"   ";
		 }
		 for(int n=i;n<=2*i-1;n++){
			 cout<<n<<"  ";
		 }
		 for(int n=2*i-2;n>=i;n--){
			 cout<<n<<"  ";
		 }
		 cout<<endl;
	 }
	return 0;
}