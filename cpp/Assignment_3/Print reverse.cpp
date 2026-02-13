#include<iostream>
using namespace std;
int main() {
	long N;
	cin>>N;
	int rev;
	while(N>0){
		int temp=N%10;
	    rev=rev*10+temp;
			N/=10;
  }
  cout<<rev;
	return 0;
}