class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> maxSlidingWindow;
        int left=0;
        for(int right=0;right<nums.size();right++){
            if(k==right-left+1){
                int maxi=*max_element(nums.begin()+left,nums.begin()+right+1);
                maxSlidingWindow.push_back(maxi);
                left++;
            }
        }
        return maxSlidingWindow;
    }
};
