#include<vector>
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int b;
        sort(nums.begin(), nums.end());
        for(int i=0 ; i< n; i ++){
            if(nums[i]==nums[i+1]){
            b=nums[i];
            break;
            }
        }
        return b;
    }
};