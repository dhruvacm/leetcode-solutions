class Solution {
    public int findNumbers(int[] nums) {
        
        int evencount=0;
        for(int n:nums)
        {
            int len=String.valueOf(n).length();
            if(len%2==0)
            evencount++;
        }
        return evencount;
    }
}