class Solution(object):
    def missingNumber(self, nums):
        n=len(nums)
        sum=n*(n+1)/2
        for i in nums:
            sum=sum-i
        return sum    

        