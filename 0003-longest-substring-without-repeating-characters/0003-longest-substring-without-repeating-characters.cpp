class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        int j=0,ans=0;
        for(int i=0;i<s.size();){
            if(st.find(s[i])==st.end())
            {
                st.insert(s[i]);
                i++;
                int x=st.size();
                ans=max(ans,x);
            }  
            else
            {
                st.erase(s[j++]);
                
            }
        }
        return ans;
    }
};