class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       int x=*max_element(candies.begin(),candies.end());
        int n=candies.size();
        vector<bool>ans(n,0);
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=x)
                ans[i]=1;
        }
        return ans;
    }
};