#include <iostream>
using namespace std;

int main()
{
   int n=5;
   for(int i=1;i<=n;i++){
       for(int j=n;j>=i;j--){
           cout<<"* ";
       }
        for(int j=2;j<=i;j++){
          if(j==2)
           cout<<"  ";
          else
           cout<<"    ";
       }
    
        for(int j=n;j>=i;j--){
            if(j!=1)
             cout<<"* ";
       }

       cout<<endl;
   }
    return 0;
}