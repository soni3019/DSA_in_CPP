#include <unordered_set>
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
   unordered_set<int > my(nums1.begin(), nums1.end());
   unordered_set<int> result;

   for(auto& it:nums2){
    if(my.count(it))
   result.insert( it);
   }
   vector<int> nums3(result.begin(), result.end());
   return  nums3;
    }
};