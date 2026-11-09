class Solution {
public:
    int characterReplacement(string s, int k) {
        int length=0;
        int left=0;
        int maxfreq=0;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            maxfreq=max(maxfreq,mp[s[i]]);
            if((i-left+1)-maxfreq>k){
                mp[s[left]]--;
                left++;
            }
            length=max(length,i-left+1);
        }
        return length;
    }
};
