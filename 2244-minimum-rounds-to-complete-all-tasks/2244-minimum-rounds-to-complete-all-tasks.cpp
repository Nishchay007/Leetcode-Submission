class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int>mp;
        int ans=0;
        for(auto i:tasks)
            mp[i]++;
        for(auto i:mp){
            if(i.second==1)
                return -1;
            else
                ans+=(i.second%3==0?(i.second/3):(i.second/3)+1);
                
        }
        return ans;
    }
};