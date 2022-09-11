long long trappingWater(int arr[], int n){
        // code here
        // sort(arr,arr+n);
        long long ans = 0;
        int lm = 0, rm = 0, s = 0, e = n-1;
        while(s<=e)
        {
            if(arr[s]<=arr[e])
            {
                if(arr[s] > lm)
                {
                    lm = arr[s];
                }
                else
                {
                    ans = ans + lm - arr[s];
                }
                s++;
            }
            else
            {
                if(arr[e] > rm)
                {
                    rm = arr[e];
                }
                else
                {
                    ans = ans + rm - arr[e];
                }
                e--;
            }
        }
        
        return ans;
    }