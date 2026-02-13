#include<iostream>
using namespace std;

int GCD(long n1,long n2){
	int temp;
	while(n2!=0){
		temp=n1%n2;
		n1=n2;
		n2=temp;
	}
	return n1;
}
int main() {
	long N1;
	long N2;
	cin>>N1>>N2;
	cout<<GCD(N1,N2);
	return 0;
}
