class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool>vis(rooms.size(),0);
       queue<int>q;
       vis[0]=1;
       q.push(0);
       while(!q.empty()){
        
           int x=q.front();
           q.pop();
           for(int i:rooms[x])         
               if(!vis[i])
               {
                   vis[i]=1;
                   q.push(i);
               }
           
           }
   
       for(int i=0;i<vis.size();i++){
           if(vis[i]==false)
           return false;
       }
       return true;
    }
};