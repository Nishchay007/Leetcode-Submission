class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b){
        return (a[0]-a[1]<b[0]-b[1]);
    }
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int aR) {
        int n=rocks.size(),res=0;
        vector<vector<int>>ans(n,vector<int>(2,0));
        for(int i=0;i<n;i++){
            ans[i][0]=(capacity[i]);
            ans[i][1]=(rocks[i]);
        }
        sort(ans.begin(),ans.end(),cmp);
       for(int i=0;i<ans.size();i++){
          
               if(ans[i][0]-ans[i][1]<=aR)
               {
                   res++;
                   aR-=(ans[i][0]-ans[i][1]);
               }
               else if (ans[i][0]-ans[i][1]>aR)
                   return res;
           
       }
        return res;
        
    }
};