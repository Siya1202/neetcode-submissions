class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> wait(temperatures.size(),0);
        stack<int> st;
        for(int i=0;i<temperatures.size();i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                int idx = st.top();
                st.pop();
                wait[idx] = i - idx;
            }
            st.push(i);
        }
        return wait;
    }
};
