class Solution {
public:
    int binary(int low,int high,vector<int> & nums,int target)
    {
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
                return mid;
            else
                if(nums[mid]<target)
                    low=mid+1;
            else
                high=mid-1;
        }
        
        return -1;
    }
    
    int find(vector<int> & nums,int low,int high,int n)
    {
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
            if(nums[mid]<nums[next] && nums[mid]<nums[prev])
                return mid;
            else
                if(nums[high]>nums[mid])
                    high=mid-1;
            else
                if(nums[high]<nums[mid])
                    low=mid+1;
        }
        return 0;
    }
    int search(vector<int>& nums, int target) {
        
        if(nums.size()==1)
        {
            if(nums[0]==target)
                return 0;
            else
                return -1;
        }
        int low=0;
        int high=nums.size()-1;
        int n=nums.size();
        int index=find(nums,low,high,n);
        
        
        if(index==0)
        {
          return binary(0,n-1,nums,target);
        }
        
        else
        {
            int b1=binary(0,index-1,nums,target);
            int b2=binary(index,n-1,nums,target);
            if(b1==-1 && b2==-1)
                return -1;
            else
                if(b1==-1)
                    return b2;
            else
                return b1;
        }
        
        return -1;
        
        
    }
};