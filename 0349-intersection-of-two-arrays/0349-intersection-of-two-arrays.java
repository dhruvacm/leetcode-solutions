class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        if(nums1.length<nums2.length)
        {
            return intersection(nums2,nums1);

        }
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        int i=0,j=0,k=0;
        int ln = Integer.MIN_VALUE;
        int[] res=new int[nums1.length];
        while(i<nums1.length && j<nums2.length)
        {
            if(nums1[i]==nums2[j] && nums1[i]!=ln)
            {
                res[k]=nums1[i];
                ln=nums1[i];
                i++;
                j++;
                k++;

            }
            else if(nums1[i]<nums2[j])
            i++;
            else
            j++;
        }
        return Arrays.copyOfRange(res,0,k);
        
    }
}