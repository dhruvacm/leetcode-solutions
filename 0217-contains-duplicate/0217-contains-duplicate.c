bool containsDuplicate(int* nums, int numsSize) {
    
int count=0;
    int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

qsort(nums, numsSize, sizeof(int), compare);
for(int i=1;i<numsSize;i++)
{
    if(nums[i]==nums[i-1])
    {
       count=1;

    }
}
return count;
}