class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        vector<vector<char>> v(numRows);
        int i=-1,j=0;
        while(j<s.size())
        {   
            while(i<numRows-1&&j<s.size())
            {   
                i++;
                v[i].push_back(s[j]);
                j++;
                
            }
            while(i>1&&j<s.size())
            {    
                i--;
                v[i].push_back(s[j]);
                j++;
            }
            
            i-=2;
        }
        
        string ans="";
        string res = "";
        for(int j=0;j<numRows;j++)
        {
            for(int k=0;k<v[j].size();k++)
            {
                if (v[j][k] != '\0') ans = ans + v[j][k];
            }
        }
        
        return ans;
        
    }
};