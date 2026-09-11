class Solution {
    public int arrayPairSum(int[] nums) {

        int l=0,r=1;
        int min=0;
        Arrays.sort(nums);
        while(l<nums.length && r<nums.length)
        {
            if(nums[l]<nums[r])
            min+=nums[l];
            else
            min+=nums[r];
            l+=2;
            r+=2;

        }
        return min;
    }
}