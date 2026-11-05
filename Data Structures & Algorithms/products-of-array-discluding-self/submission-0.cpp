class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> productExceptSelf(nums.size(),0);
        int product=1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                product*=nums[i];
            }
            if (nums[i]==0){
                count++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(count>=2){
                return productExceptSelf;
            }
            else if(count==1){
                if(nums[i]==0){
                    productExceptSelf[i]=product;
                }
            }
            else{
            productExceptSelf[i]=product/nums[i];}
        }
        return productExceptSelf;
    }
};
