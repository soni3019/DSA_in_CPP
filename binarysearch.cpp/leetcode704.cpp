class Solution {
public:
    int search(vector<int>& nums, int target) {
     if(nums[0]==target)
     return 0;
        int mid;
        int n=nums.size();
        int start=0;
        int end=n-1;
        while(start<=end){
            mid=(start+end)/2;
            if(nums[mid]==target)
            return mid;
           else if(nums[mid]<target){
start=mid+1;
            }
            else
            end=mid-1;
        }
        return -1;
    }
};