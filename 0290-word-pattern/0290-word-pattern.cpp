class Solution {
public:
    bool wordPattern(string pat, string s) {
        map<char,int> mp1;
        map<string,int> mp2;
        stringstream ss(s);
        string word;int i=0,n=pat.size();
        while(ss>>word)
        {   if(i==n||mp1[pat[i]]!=mp2[word])
                return false;
           
                mp1[pat[i]]= mp2[word]=i+1;
                i++;
                      
        }
        return (i==n);
    }
};