class Solution {
public:
    int trap(vector<int>& height) {
        
        int res=0;
        int n=height.size();
        if(n==0)
            return 0;
        int left[n];
        int right[n];
        
        int maxx=INT_MIN;
        for(int i=0;i<n;i++){
            maxx=max(maxx,height[i]);
            left[i]=maxx;
        }
        maxx=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            maxx=max(maxx,height[i]);
            right[i]=maxx;
            
        }
        
        
        
        for(int i=0;i<n;i++)
        {
            res+=min(left[i],right[i])-height[i];
        }
        
        return res;
        
    }
};