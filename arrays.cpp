#include <bits/stdc++.h>
using namespace std;


int main(){

    int arr[] = {1,2,1,2,3,4,4};
    set<int> st;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int index =0;
    for(auto it:st){
        arr[index] = it;
        index++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}