class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> twoSum;
        int index1=0;
        int index2=numbers.size()-1;
        while(index1<index2){
            while(index1<index2 && numbers[index1]+numbers[index2]<target){
                index1++;
            }
            while(index1<index2 && numbers[index1]+numbers[index2]>target){
                index2--;
            }
            if(numbers[index1]+numbers[index2]==target){
                twoSum.push_back(index1+1);
                twoSum.push_back(index2+1);
                return twoSum;
            }
        }
        return twoSum;
    }
};
