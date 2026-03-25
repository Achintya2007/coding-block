#include <iostream>
#include <algorithm>
using namespace std;

void sortArray(int A[],int N){
    sort(A,A+N);
}

int main(){
    int N;
    cin>>N;

    int A[N];
    for(int i=0;i<N;i++)
        cin>>A[i];

    sortArray(A, N);

    for(int i=0;i<N;i++)
        cout<<A[i]<<" ";

    return 0;
}