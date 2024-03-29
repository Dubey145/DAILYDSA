// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int count(int N){
        // code here
        // N=6
        vector<int>dp(N+1,0);
        dp[0]=1;
        for(int i=0;i<=N;i+=2){
            for(int j=0;j<=i-2;j+=2 ){
                dp[i] += dp[j]*dp[i-j-2];//1+2*2
            }
        }
    return dp[N]; //return 5
        
    }
    
    
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.count(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends