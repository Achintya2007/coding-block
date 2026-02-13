#include<iostream>
using namespace std;

long GCD(long N1,long N2){
	long temp;
	while(N2!=0){
       temp=N1%N2;
	   N1=N2;
	   N2=temp;
	}
	return N1;
}
long LCM(long N1,long N2){
	return N1/GCD(N1,N2)*N2;
}
int main() {
	long N1;
	long N2;
    cin>>N1>>N2;
	cout<<LCM(N1,N2);
	return 0;
}