#include <iostream>
using namespace std;

int main()
{
   int n;
   cout<<"enter number=";
   cin>>n;
   int num=1;
   for(int i=1;i<=n;i++){
       for(int j=n;j>=i;j--){
           cout<<" ";
       }
           for(int k=1;k<=(2*i-1);k++){
               cout<<num++;
           }
       
       cout<<endl;
   }
    return 0;
}