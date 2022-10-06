int maxDays(int arr[],int n){
        
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
           ans=max(ans,arr[i]);
        }
        return ans;
        // code here
        return 0;
    }
