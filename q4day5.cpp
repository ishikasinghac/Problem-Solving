int check(int num){
      int d=num%10;
      num=num/10;
      if(num==0)
      {
          return 0;
      }
      while(num!=0)
      {
          int s=num%10;
          if(abs(d-s)!=1)
          return 0;
      d=s;
      num/=10;
          
      }
      return 1;
  }
    vector<long long> getDigitDiff1AndLessK(long long *arr, int n, long long k) {
        // code here
        
        vector<long long> ans;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<k && check(arr[i]))
            {
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
