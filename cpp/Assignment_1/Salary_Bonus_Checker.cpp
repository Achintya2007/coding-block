#include<iostream>
using namespace std;

int main(){
    long salary;
    int experience;
    cin>>salary>>experience;

    long bonus=0;

    if(experience>=5){
        bonus=(salary*10)/100;
    }

    cout<<bonus;

    return 0;
}
