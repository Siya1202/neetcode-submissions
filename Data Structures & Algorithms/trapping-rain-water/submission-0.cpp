class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int water=0;
        int leftMx=0;
        int rightMx=0;
        while(left<right){
            if(leftMx<=rightMx){
                leftMx=max(leftMx,height[left]);
                water+=(leftMx-height[left]);
                left++;
            }
            else{
                rightMx=max(rightMx,height[right]);
                water+=(rightMx-height[right]);
                right--;
            }
        }
        return water;
    }
};
