int Solution::numDecodings(string s) {
    int mod=1e9+7;
    
    int n=s.size();
    int dp[n+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    if(s[0]=='0'){
        dp[1]=0;
    }
    else{
        dp[1]=1;
    }
    
    for(int i=2;i<=n;i++)
    {
        int one= (s[i-1]-'0');
        if(one>=1)
        {
            dp[i]= (dp[i]+ dp[i-1])%mod;
        }
        int two= (s[i-2]-'0')*10 + one;
        if(two>=10 && two<=26 )
        {
            dp[i]= (dp[i]+dp[i-2])%mod;
        }
        
    }
    return dp[n];

}
