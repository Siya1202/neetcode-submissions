class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string s: tokens){
            if(s=="+" || s=="-" || s=="/" || s=="*"){
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                if(s=="+"){
                    int c=a+b;
                    st.push(c);
                }
                else if(s=="-"){
                    int c=a-b;
                    st.push(c);
                }
                else if(s=="/"){
                    int c=a/b;
                    st.push(c);
                }
                else if(s=="*"){
                    int c=a*b;
                    st.push(c);
                }
            }
            else{
                st.push(stoi(s));
            }
        }
        return st.top();
    }
};
