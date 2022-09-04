#include<iostream>
#include<vector> 
using namespace std;

vector<int> print(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return arr;
}

int main(){
    vector<int> arr={2,1,0,0,3,0,9,4,0},ans;
    int zerocount=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            zerocount++;
        }
        else{
            ans.push_back(arr[i]);
        }
    }
    while(zerocount!=0){
         ans.push_back(0);
         zerocount--;
    }
    print(ans);
    return 0;
}

//alternate solution
//https://leetcode.com/problems/move-zeroes/submissions/
// int index=0;
//         for(int i=0;i<nums.size();i++){
//         if(nums[i]!=0){
//             swap(nums[i],nums[index]);
//             index++;
//         }