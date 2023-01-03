class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans=0;
       for(int i=0;i<strs[0].size();i++){
           string s;
           for(int j=0;j<strs.size();j++){
               s.push_back(strs[j][i]);
               
           }
           string p=s;
           sort(p.begin(),p.end());
           
           if(p!=s)
               ans++;
           
       }
        return ans;
    }
};