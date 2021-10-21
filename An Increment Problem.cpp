vector<int> Solution::solve(vector<int> &A) {
    
    unordered_map<int,int>mp;
    
    for(int i=0;i<A.size();i++)
    {
        if(mp.find(A[i])!=mp.end())
        {
            A[mp[A[i]]]++;
            mp[A[mp[A[i]]]]=mp[A[i]];
        }    
         //   mp.erase(A[i]);
            mp[A[i]]=i;
            
        // }
        // else{
        //     mp[A[i]]=i;
        // }
    }
    
    return A;

}
