 void  solve(int index,int k,int n,int sum,vector<int>temp,vector<vector<int>>&ans)
    {
        if(sum==n && k==0)
        {  
            ans.push_back(temp);
            return; 
        }
        
        if(sum>n)
         return;

        for(int i=index+1;i<=9;i++)
        {
            temp.push_back(i);
            solve(i,k-1,n,sum+i,temp,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(0,k,n,0,temp,ans);
        return ans;
    }
