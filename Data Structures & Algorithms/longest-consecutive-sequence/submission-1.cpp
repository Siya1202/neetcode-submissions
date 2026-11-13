class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int length=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]!=nums[i]+1){
                    break;
                }
                length++;}
        }
        return length;
    }
};
