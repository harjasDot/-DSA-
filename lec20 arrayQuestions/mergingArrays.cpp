#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr1={1,2,3,4,5}, arr2={6,7,8,9,10}, arr3;
    int finalLength=arr3.size(),length1=arr1.size(),length2=arr2.size();
    int i=0;
    while(finalLength<length1){
        arr3.push_back(arr1[i]);
        i++;
        finalLength++;
    }    
    i=0;
    finalLength=0;
    while(finalLength<length2){
        arr3.push_back(arr2[i]);
        i++;
        finalLength++;
    }
    for(int i=0;i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }
    
}