class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty() || s.empty() || t.size() > s.size()) return "";
        unordered_map<char,int> mp;
        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }
        int left=0;
        int minlen=INT_MAX;
        int count=0;
        int start=0;
        for(int right=0;right<s.size();right++){
            if(mp.find(s[right])!=mp.end()){
                //mp[s[left]]++;
                if(mp[s[right]]>0){
                    count++;
                }
                mp[s[right]]--;
            }
            while(count==t.size()){
                int windowlen=right-left+1;
                if(windowlen < minlen){
                    minlen = windowlen;
                    start = left;
                }
                if(mp.find(s[left]) != mp.end()) {
        mp[s[left]]++;

        if(mp[s[left]] > 0) {
            count--;
        }
    }

    left++;
            }
        }
        if(minlen == INT_MAX) return "";
        return s.substr(start, minlen);
    }
};
