#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        int n = nums.size();
        vector<int> temp ;
        for(int i=k+1;i<n;i++){
            temp.push_back(nums[i]);
        }
        int z = n;
        for(int i=k;i>=0;i--){
            
            nums[z-1] = k;
            z--;
        }
        
        for(int i=0;i<=k;i++){
            nums[i] = temp[i];
        }

       
       
       
    }


int main(){

   vector<int> nums = {1,2,3,4,5,6,7};
   int k=3;
   rotate(nums,3);

   vector<int> nums = {1,0,1,1,1,0,1,1,0,1,1,1,1,0,1,0,1};

   

    
    
}