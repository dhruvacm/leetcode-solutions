void rotate(int* nums, int numsSize, int k) {
    int nums1[numsSize];
    k=k%numsSize;
    int l=0,r=numsSize-1;
    while(l<r)
    {
        int temp=nums[l];
        nums[l]=nums[r];
        nums[r]=temp;
        l++;
        r--;
    }
    l=0;r=k-1;
    while(l<r)
    {
         int temp=nums[l];
        nums[l]=nums[r];
        nums[r]=temp;
        l++;
        r--;

    }
    l=k;r=numsSize-1;
    while(l<r)
    {
         int temp=nums[l];
        nums[l]=nums[r];
        nums[r]=temp;
        l++;
        r--;
    }
    
}