#include <iostream>
using namespace std;
int main() {
  int n,last=0;
  int rev_nu=0;
  cout<<"enter the number:";
  cin>>n;
  while(n!=0){
         last=n%10;
         rev_nu=rev_nu*10+last;
         n = n/10;
  }
  cout<<rev_nu<<endl;
    return 0;
}