this solution will give you tle but it is important to understand it.
____________________________________________________________________
class Solution {
public:
    int superEggDrop(int n, int k) {
        int dp[n+1][k+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=k;j++)
            {
                if(i==1)
                {
                    dp[i][j]=j;
                }
                else if(j==1)
                {
                    dp[i][j]=1;
                }else{
                    int mini=INT_MAX;
                    for(int mj=j-1,pj=0;mj>=0;mj--,pj++)
                    {
                        int v1=dp[i][mj];
                        int v2=dp[i-1][pj];
                        int val=max(v1,v2);
                        mini=min(mini,val);
                    }
                    dp[i][j]=mini+1;
                }
            }
        }
        return dp[n][k];
        
    }
};

------------------------------------------------------------------------------------------------------

int Solution::solve(int k, int n) {
    int dp[k+1][n+1];
        for(int i = 0; i <= n; i++) dp[0][i] = INT_MAX;
        for(int i = 0; i <= n; i++) dp[1][i] = i;
        for(int i = 0; i <= k; i++) dp[i][0] = 0;
        for(int i = 0; i <= k; i++) dp[i][1] = 1;
        
        for(int i = 2; i <= k; i++)
            for(int j = 2; j <= n; j++) {
               int l = 1, r = j, temp = 0, ans = INT_MAX;
                 while(l <= r) {
                    int mid = (l + r)/2;
                    int left = dp[i-1][mid-1]; 
                    int right = dp[i][j-mid];  
                    temp = 1 + max(left,right);         
                    if(left < right) l = mid+1;                       
                    else r = mid-1;
                    ans = min(ans,temp);               
                 }
                 dp[i][j]=ans;
            }
        return dp[k][n];
}
