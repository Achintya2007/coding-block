#include<iostream>
using namespace std;
int main(){
	int min_f,max_f,a;
	cin>>min_f>>max_f>>a;\
	int celsius=0;
	for(int i=min_f;i<=max_f;i+=a){
	     celsius = (5*(i-32))/9;	
		cout<<i<<" "<<celsius<<endl;
	}

	return 0;
}