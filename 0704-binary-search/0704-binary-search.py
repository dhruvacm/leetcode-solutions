class Solution(object):
    def search(self, nums, target):
        l=0
        r=len(nums)-1
        return self.binary(l,r,nums,target)
        
              
        
    def binary(self,l,r,nums,target):
        if l>r:
            return -1
        mid=l+(r-l)//2
        if nums[mid]==target:
            return mid
        if nums[mid]<target:
            return self.binary(mid+1,r,nums,target)
        else:
            return self.binary(l,mid-1,nums,target)     