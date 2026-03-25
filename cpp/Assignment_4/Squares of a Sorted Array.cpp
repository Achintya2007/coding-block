#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    vector<int>result(n);
    int left=0,right=n-1;
    int pos=n-1;

    while(left<=right){
        if(abs(nums[left]) > abs(nums[right])){
            result[pos--]=nums[left]*nums[left];
            left++;
        } else {
            result[pos--]=nums[right]*nums[right];
            right--;
        }
    }

    for(int x:result){
        cout<<x<<" ";
    }

    return 0;
}