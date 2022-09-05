//https://leetcode.com/problems/rotate-array/submissions/
//Note: An array A rotated by x positions results in an array B of the same length such that
// A[i] == B[(i+x) % A.length], where % is the modulo operation.
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
    vector<int> nums={1,2,3,4,5,6,7},temp(nums.size());
    int k=2;
    for(int i=0;i<nums.size();i++){
 //formula used => 
        temp[(i+k)%nums.size()]=nums[i];
    }
    nums=temp;
    print(nums);

}