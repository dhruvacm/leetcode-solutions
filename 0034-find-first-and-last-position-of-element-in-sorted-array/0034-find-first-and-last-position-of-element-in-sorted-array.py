class Solution(object):
    def searchRange(self, nums, target):
        first=self.bound(nums,target,True)
        last=self.bound(nums,target,False)
        return [first,last]
    def bound(self,nums,target,isfirst):
        l=0
        r=len(nums)-1
        ans=-1
        while l<=r:
            mid=l+(r-l)//2
            if nums[mid]==target:
                ans=mid

                if isfirst:
                    r=mid-1
                else:
                    l=mid+1
            elif nums[mid]<target:
                l=mid+1
            else:
                r=mid-1
        return ans          
        