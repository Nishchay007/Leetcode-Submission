class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        if(arr[start]==0)
            return true;
     vector<bool>vis(n,0); 
        vis[start]=1;
       
       
        queue<int> q;
        q.push(start);
        while(!q.empty()){
            int p=q.front();
            q.pop();
            int x=p-arr[p];
            int y=p+arr[p];
           
              
            if(x>=0&&x<n&&!vis[x]){
                if(arr[x]==0)
                    return true;
                 vis[x]=1;
                 q.push(x);
                
                
                
            }
            if(y>=0&&y<n&&!vis[y])
            {
               if(arr[y]==0)
                   return true;
               
                   vis[y]=1;
                    q.push(y);
                
               
                
                     
            }
          
        }
        return false;        
    }
    
};