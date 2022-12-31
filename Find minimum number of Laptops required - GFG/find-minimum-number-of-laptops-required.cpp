//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
 
    int minLaptops(int N, int start[], int end[]) {
        // Code here
        vector<vector<int>>v(N,vector<int>(2,0));
        sort(start,start+N);
        sort(end,end+N);
        int i=0,j=1,ans=1;
        while(i<N&&j<N){
            
            if(start[j]>=end[i])
            i++;
            else
            ans++;
            j++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];
            
        Solution ob;
        cout << ob.minLaptops(N, start, end) << endl;
    }
}
// } Driver Code Ends