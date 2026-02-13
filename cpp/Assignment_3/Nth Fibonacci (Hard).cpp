#include<iostream>
using namespace std;

int main() {
	int N,c;
	cin>>N;
	int a=0;
	int b=1;
	for(int i=2;i<=N;i++){
		int temp=a+b;
			a=b;
			b=temp;
	}
	cout<<b;
	return 0;
}