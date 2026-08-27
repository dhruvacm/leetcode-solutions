class Solution {
    public int trap(int[] height) {
    int l=0;
    int r=height.length-1;
    int maxl=0;
    int maxr=0;
    int water=0;
    while(l<r)
    {
        if(height[l]<height[r])
        {
            maxl=Math.max(maxl,height[l]);
            water+=maxl-height[l];
            l++;
        }
        else
        {
            maxr=Math.max(maxr,height[r]);
            water+=maxr-height[r];
            r--;
        }
    }
    return water;
        
    }
}