#include<iostream>
using namespace std;

int series(int N1,int N2){
     int count=0,n=1;
	 int temp;
	 while(N1>count){
		 temp=3*n+2;
		 if(temp%N2!=0){
			 cout<<temp<<endl;
			 count++;
		 }
		 n++;
	 }
	 return 0;
}
int main() {
    int N1,N2;
	cin>>N1>>N2;
	series(N1,N2);
	return 0;
}