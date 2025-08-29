#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,1,0,1,1,1};
    int max =0;
    int cnt =0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] ==1){
            cnt++;
            if(i==nums.size()-1){
                if(max<cnt){
                    max = cnt;
                }
            }
        }
        else{
            if(max<cnt){
                max = cnt;
            }
            cnt =0;
        }
        
    }

    cout<<max;
}