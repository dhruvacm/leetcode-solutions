class Solution(object):
    def missingNumber(self, nums):
        res=[0]*(len(nums)+1)
        for i in range(len(nums)):
            res[nums[i]]=1
        for i in range(len(res)):
            if res[i]!=1:
                return i
        return -1        
        