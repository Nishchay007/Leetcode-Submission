class Solution {
public:
    bool validateStackSequences(vector<int>& pu, vector<int>& po) {
        stack<int> st;
        st.push(pu[0]);
        int i=1,j=0;
       
       for(int i=0;i<pu.size();i++)
       {  st.push(pu[i]);
           
            while(st.size()>0&&j<pu.size()&&st.top()==po[j])
            {
                st.pop();
                j++;
            }
            
        }
        return j==pu.size();
    }
};
