#include <iostream>
using namespace std;


int main() {
   int principal;
   int year;
   float rate;
   float SI;
   cout<<"Enter Principal amount :"<<endl;
   cin>>principal;

   cout<<"Enter time in Year :"<<endl;
   cin>>year;

   cout<<"Enter Rate of interst :"<<endl;
   cin>>rate;

   SI = principal*year*rate/100;
   cout<<"The Simple interest is :"<<SI; 

    return 0;
}