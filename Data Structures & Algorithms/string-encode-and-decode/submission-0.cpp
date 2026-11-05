class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(int i=0;i<strs.size();i++){
            s=s+to_string(strs[i].size())+'#'+strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i=0;
        while(i<s.size()){
            int j=i;
            do{j++;}while(s[j]!='#');
            int length=stoi(s.substr(i,j-i));
            i=j+1;
            strs.push_back(s.substr(i,length));
            i+=length;
        }
        
        return strs;
    }
};
