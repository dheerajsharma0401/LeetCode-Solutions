int missingNumber(int* nums, int numsSize){
    int miss=0,tot=0,sum=0;
    
    for(int i=1;i<=numsSize;i++)
    {
        tot=tot+i;
        sum=sum+nums[i-1];
        
    }
    
    miss=tot-sum;
    return miss;
    

}