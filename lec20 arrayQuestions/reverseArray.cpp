#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;

vector<int> print(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return arr;
}

vector<int> reverse(vector<int> arr){
    int s=0,e=arr.size()-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    cout<<"REVERSED ARRAY:"<<endl;
    print(arr);
    return arr;
}

int main(){
    vector<int> arr={9,10,1,3,4,6};
    arr.push_back(2);
    cout<<"SORTED ARRAY:"<<endl;
    cout<<endl;
    sort(arr.begin(),arr.end());
    print(arr);
    cout<<"ORIGNAL ARRAY:"<<endl;
    print(arr);
    cout<<endl;
    reverse(arr);

}