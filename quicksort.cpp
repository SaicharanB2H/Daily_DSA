#include <bits/stdc++.h>
using namespace std;

int f(vector<int> &arr,int low ,int high){
    int pivot =arr[low];
    int i = low;
    int j = high;

    while(i<j){

        
        while(arr[i] <= pivot && i<=high-1){
            i++;
        }
        
        while(arr[j] > pivot && j>=low+1){
            j--;
        }
        
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp1 = arr[low];
    arr[low ] = arr[j];
    arr[j] = temp1;
    return j;
}

void qs(vector<int> &arr,int low ,int high){
    if(low < high){
       int  p_index = f(arr,low,high);

        qs(arr,low,p_index-1);
        qs(arr,p_index+1,high);
    }
}


int main(){

    vector<int> arr = {4,3,1,6,2};
    qs(arr,0,arr.size()-1);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}