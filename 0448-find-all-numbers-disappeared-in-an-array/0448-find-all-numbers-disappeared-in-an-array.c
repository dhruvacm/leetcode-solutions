/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int n, int* returnSize) {
    int *nums1 = calloc(n+1, sizeof(int));
    int *result=malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        
        nums1[nums[i]]=1;

    }
    *returnSize=0;
    for(int i=1;i<=n;i++)
    {
        if(nums1[i]==0){ 
        result[*returnSize]=i;
        (*returnSize)++;
        }
    }
    free(nums1);
    return result;
}