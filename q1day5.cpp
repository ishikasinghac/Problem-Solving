 int chocolates(int n, vector<int> &arr) {
        // code here
        int ans=1000000000;
        for(int i=0;i<n;i++)
        {
            ans= min(ans,arr[i]);
        }
        return ans;
        
    }
};
