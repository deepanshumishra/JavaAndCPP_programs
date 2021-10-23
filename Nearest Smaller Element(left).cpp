vector<int> Solution::prevSmaller(vector<int> &arr) {
    stack<int>st;
    vector<int>v;
    for(int i=0;i<arr.size();i++)
    {
        if(st.empty())
        {
            v.push_back(-1);
            
        }
        else if(st.top()<arr[i])
        {
            v.push_back(st.top());
        }
        else if(st.top()>=arr[i])
        {
            while(!st.empty() && st.top()>=arr[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                v.push_back(-1);
            }
            else if(st.top()<arr[i])
            {
                v.push_back(st.top());
            }
        }
        
        st.push(arr[i]);
        
        
    }
    
    return v;
    
}
