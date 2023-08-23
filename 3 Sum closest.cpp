

#include <iostream>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int nsum=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-1;i++){
         
            int start=i+1;
            int end=nums.size()-1;

            while(start<end){
                int csum =nums[start]+nums[end]+nums[i];
                 if(abs(csum-target)<abs(nsum-target)){
                        nsum=csum;
                    } 
                if(csum<target){
                    start++;
                } else {
                    end--;
                }
            }
          
        }
        return nsum;
    }
};
