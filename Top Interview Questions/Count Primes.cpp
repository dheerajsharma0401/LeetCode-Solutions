class Solution {
public:
    int countPrimes(int n) {
        vector<bool> data(n,true);
        int count=0;
        if(n==0||n==1)
            return 0;
        for(int i=2;i<sqrt(n);i++)
        {
            if(data[i])
            {
                    for(int j=i*i;j<n;j=j+i)
                {
                    data[j]=false;;
                }
            }
        }
         
        for(int i=2;i<n;i++)
        {
            if(data[i])     
                count++;
        }
        
        
    
       // count++;
        return count;
    }
};