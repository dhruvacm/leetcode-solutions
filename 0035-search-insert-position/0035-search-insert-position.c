int searchInsert(int* nums, int numsSize, int target) {
    if(target<nums[0])
    return 0;
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i]==target)
           return i;
        else if(nums[i]<target && nums[i+1]>target)
            return i+1;
    }
    if(target==nums[numsSize-1])
    return numsSize-1;
    return numsSize;
}