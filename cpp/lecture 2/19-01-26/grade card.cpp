#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"enter the marks number:";
    cin>>marks;
    switch(marks/10){
        case 10:
        case 9:
             cout<<"grade A"<<endl;
             break;
        case 8:
             cout<<"grade B"<<endl; 
             break;
        case 7:
             cout<<"grade c"<<endl; 
             break;
        case 6:
             cout<<"grade D"<<endl; 
             break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        cout<<"grade F"<<endl;
        break;
        default:
             cout<<"enter a valid input";
             break;
             }
    return 0;
}