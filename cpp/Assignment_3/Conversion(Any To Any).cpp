#include<iostream>
using namespace std;

int convertbase(int sb,int db,int sn){
	int decimal=0,power=1;
	while(sn>0){
		decimal+=(sn%10)*power;
		power *=sb;
		sn/=10;
	}

	int result=0;
	power=1;
	while(decimal>0){
		result +=(decimal%db)*power;
		power*=10;
		decimal/=db;
	}
	return result;
}
int main() {
	int sb,db,sn;
	cin>>sb>>db>>sn;
	cout<<convertbase(sb,db,sn);
	return 0;
}
