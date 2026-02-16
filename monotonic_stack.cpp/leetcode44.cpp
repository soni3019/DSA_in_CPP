class Solution {
public:
  vector<int>leftjmax(vector<int> &  height ,int n){
            vector<int>leftmaxi(n);
            leftmaxi[0]=height[0];
            for(int i=1; i< n ; i++){
                leftmaxi[i]=max(leftmaxi[i-1], height[i]);
            }
            return leftmaxi;
        }
         vector<int>rightjmax(vector<int> &  height ,int n){
            vector<int>rightmaxi(n);
            rightmaxi[n-1]=height[n-1];
            for(int i=n-2; i>=0 ; i--){
               rightmaxi[i]=max(rightmaxi[i+1], height[i]);
            }
            return rightmaxi;
        }
    int trap(vector<int>& height) {
          int n=height.size();
        int sum=0;
        int h;
          vector<int> leftmaxi=leftjmax(height , n);
        vector<int> rightmaxi=rightjmax(height ,n);
        
      
      
     
         
        for(int i=0; i< n; i++){
            h=min(leftmaxi[i],rightmaxi[i])-height[i];
            sum+=h;
        }
        return sum;

    }
}; 