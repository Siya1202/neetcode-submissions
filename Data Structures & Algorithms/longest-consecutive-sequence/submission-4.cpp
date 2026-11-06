class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int length=1;
        int count=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            else if((long long)nums[i]==(long long)nums[i-1]+1){
                count++;
            }
            else{
                count=1;
            }
            length=max(length,count);
        }
        return length;
    }
};
