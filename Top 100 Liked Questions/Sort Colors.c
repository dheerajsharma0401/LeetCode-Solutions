

void sortColors(int* nums, int numsSize){
    int swap=0;
    if(numsSize==1)
       printf("%d",nums[0]);
    else
    {
        for(int i=0;i<=numsSize-2;i++)
        {
            for(int j=i+1;j<=numsSize-1;j++)
            {
                if(nums[i]>nums[j]){
                    swap=nums[i];
                    nums[i]=nums[j];
                    nums[j]=swap;
                }
            }
        }
    }
    
    for(int i=0;i<numsSize;i++)
        printf("%d ",nums[i]);

}