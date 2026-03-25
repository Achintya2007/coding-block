#include<iostream>
using namespace std;

void invert(int a[],int b[],int N,int i){
	if(i==N){
      return;
	}
	b[a[i]]=i;
	invert(a,b,N,i+1);
}
int main() {
	int N;
	cin>>N;
	int a[N],b[N];
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	invert(a,b,N,0);
	for(int j=0;j<N;j++){
		cout<<b[j]<<" ";
	}

	return 0;
}