class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      stack<int> s;
    
    vector<int> res;
    int n1=  nums1.size();
    int n2=nums2.size();
      vector<int>nge(n2);
    for(int i=n2-1 ; i>=0; i --){
        while(!s.empty()&& s.top()<nums2[i])
        s.pop();
        if(s.empty())   nge[i]=-1;
        else  nge[i]=s.top();
        s.push(nums2[i]);
    }
    for(int i =  0  ; i<nums1.size();i++){
        for(int j  = 0  ; j<nums2.size();j++){
            if(nums1[i]==nums2[j]){
                res.push_back(nge[j]);
            }
        }
    }
    return res;
    }
};