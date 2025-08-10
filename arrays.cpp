#include <bits/stdc++.h>
using namespace std;


int main(){

    // int arr[] = {1,2,1,2,3,4,4};
    // set<int> st;
    // int n = sizeof(arr)/sizeof(arr[0]);

    // for(int i=0;i<n;i++){
    //     st.insert(arr[i]);
    // }
    // int index =0;
    // for(auto it:st){
    //     arr[index] = it;
    //     index++;
    // }

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    int arr[] {1,2,3,4,5};

    int temp = arr[0];
    
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
        
    }

    
    arr[n-1] = temp;


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}