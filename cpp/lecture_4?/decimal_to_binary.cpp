#include <iostream>
using namespace std;

int main(){
    int decimal,binary=0,place=1;
    cin>>decimal;
    while(decimal>0){
      int rem=decimal % 2;
      binary=binary+rem*place;
      place=place*10;
      decimal/=2;  
}
    cout<<binary;
    return 0;
}