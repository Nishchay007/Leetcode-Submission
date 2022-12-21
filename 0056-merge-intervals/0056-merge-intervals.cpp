// static bool compare(vector<int> v1,vector<int> v2){
//         return v1[0]<v2[0];
//     }
// class Solution {
     
// public:
   
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//        vector<vector<int>> ans;
//        sort(intervals.begin(),intervals.end());
//         ans.push_back(intervals[0]);
//         for(int i=1;i<intervals.size();i++)
//          if(ans.back()[1]>=intervals[i][0])
//                 ans.back()[1]=max(ans.back()[1],intervals[i][1]);
//             else
//                 ans.push_back(intervals[i]);
        
//         return ans;
//     }
// };
bool compare(vector<int> v1,vector<int> v2){
        return v1[0]<v2[0];
    }
class Solution {
     
public:
   
    vector<vector<int>> merge(vector<vector<int>>& vin) {
        vector<vector<int>> ans;
        sort(vin.begin(),vin.end(),compare);
            stack<vector<int>> st;
        st.push(vin[0]);
        for(int i=1;i<vin.size();i++)
        {
            vector<int> cm=vin[i];
            vector<int> lm=st.top();
            if(cm[0]<=lm[1])
            {
                st.pop();
                st.push({lm[0],max(lm[1],cm[1])});
            }
            else
            {
                st.push(cm);
            }
        }
        stack<vector<int>> st1;
        while(st.size()!=0)
        {
            ans.push_back(st.top());
            st.pop();
        }
        // sort(ans.begin(),ans.end(),compare);
      return ans;
    }
};