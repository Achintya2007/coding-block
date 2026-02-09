#include <iostream>
using namespace std;

int main()
{
   int n;
   cout<<"enter number=";
   cin>>n;
   for(int i=1;i<=n;i++){
       cout<<" ";
       for(int j=1;j<=i;j++){
           cout<<"* ";
       }
       cout<<endl;
   }
   for(int i=2;i<=n;i++){
       cout<<" ";
       for(int j=n;j>=i;j--){
           cout<<"* ";
       }
       cout<<endl;
   }
    return 0;
}