#include<vector>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int ele=0;
       sort(nums.begin(),nums.end());
       int n=nums.size();
       for(int i=0 ; i<n; i++) {
 
 if(ele!=nums[i]){
    break;
 }
 ele++;
        }
        return ele;
       }
    // expectted sum =n*(n+1)/2;
};