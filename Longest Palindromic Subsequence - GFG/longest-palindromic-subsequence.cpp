//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  int dp[1001][1001];
    int LPS(string &str, int start, int end){
        if(start>end){
            return 0;
        }
        if(start==end){
            return 1;
        }
        if(dp[start][end]!=-1){
            return dp[start][end];
        }
        if(str[start]==str[end]){
            return dp[start][end]=2+LPS(str,start+1,end-1);
        }
        return dp[start][end]=max(LPS(str,start+1,end),LPS(str,start,end-1));
    }
    int longestPalinSubseq(string s) {      
       
        memset(dp,-1,sizeof(dp));
        int lps=LPS(s,0,s.size()-1);
        return lps;
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends