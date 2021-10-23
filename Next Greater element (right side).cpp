 vector<long long> nextLargerElement(vector<long long> arr, int n){
        
        vector<long long>v;
        stack<long long>st;
        
        for(int i=n-1;i>=0;i--)
        {
            if(st.empty())
            {
                v.push_back(-1);    
            }
            else if(st.top()>arr[i])
            {
                v.push_back(st.top());
            }
            else if(st.top() <= arr[i])
            {
                while(!st.empty() && st.top()<=arr[i])
                {
                    st.pop();
                }
                if(st.empty())
                {
                    v.push_back(-1);
                }
                else if(st.top()>arr[i])
                {
                    v.push_back(st.top());
                }
            }
            
            st.push(arr[i]);
        }
        
        
        reverse(v.begin(),v.end());
        return v;
        
        // Your code here
    }
