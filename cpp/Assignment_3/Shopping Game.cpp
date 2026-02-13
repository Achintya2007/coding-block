#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while (T--) {
        long long M, N;
        cin>>M>>N;

        long long aSum=0,hSum=0;
        int turn=1;
        bool aayushTurn=true;

        while(true){
            if(aayushTurn){
                aSum+=turn;
                if(aSum>M){
                    cout<<"Harshit\n";
                    break;
                }
            } else{
                hSum+=turn;
                if(hSum>N) {
                    cout<<"Aayush\n";
                    break;
                }
            }
            turn++;
            aayushTurn=!aayushTurn;
        }
    }
    return 0;
}