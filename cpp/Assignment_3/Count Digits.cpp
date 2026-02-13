#include<iostream>
using namespace std;
 
int digit_count(long N,int digit){
	int count=0;
	while(N>0){
		int temp=N%10;
		if(temp==digit){
		count++;
		}
		N/=10;
	}
	return count++;
};
int main() {
    long N;
	int digit;
	cin>>N;
	cin>>digit;
	cout<<digit_count(N,digit);
	return 0;
}