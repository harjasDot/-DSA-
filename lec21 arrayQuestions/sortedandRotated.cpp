//https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
//Given an array nums, return true if the array was originally sorted in non-decreasing order,
// then rotated some number of positions (including zero). Otherwise, return false.
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums={3,4,5,1,2};
    int count=0;
    for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        
        if(nums[nums.size()-1]>nums[0]){
            count++;
        }
    if(count<=1){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
}