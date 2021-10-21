int Solution::colorful(int A) {
    
    unordered_map<int,int>mp;
    while(A>0)
    {
        int temp=A;
        int prod=1;
        while(temp>0)
        {
            prod=prod* (temp%10);
            if(mp.find(prod)==mp.end())
            {
                mp[prod]=1;
            }
            else{
                return 0;
            }
            temp=temp/10;
            
           
        }
        
        A=A/10;
    }
    
    return 1;
    
}
