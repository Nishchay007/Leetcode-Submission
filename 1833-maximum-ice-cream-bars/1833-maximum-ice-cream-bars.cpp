class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans=0;
        for(int i=0;i<costs.size();i++){
            if(costs[i]>coins)
                return ans;
            else
            {
                ans+=1;
                coins-=costs[i];
            }
        }
        return ans;
    }
};