
class Solution {
public:
    void swapfun(vector<int>& nums, int a, int b){
        int temp = nums[a];
        nums[a]=nums[b];
        nums[b]=temp;
    }
    int removeElement(vector<int>& nums, int val) {
        int m = 0;
        int a = 0, b = nums.size()-1;
        while(a<=b){
            if(nums[a]!=val){
                a++;
            }
            else if(nums[a]==val){
                swapfun(nums,a,b);
                m++;
                b--;
            }
        }
        int k = nums.size()-m;
        return k;
    }
};