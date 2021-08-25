int maxSubArray(int* nums, int numsSize){
    
    int sum=0,max=INT_MIN;
    
    if(numsSize==1)
        return nums[0];
    
    else
    {
    for(int i=0;i<numsSize;i++)
    {
        
        sum=sum+nums[i];
        if(nums[i]>sum)
            sum=nums[i];
        if(sum>max)
        {
            max=sum;
        }
      
    }
    return max;
    }

}
