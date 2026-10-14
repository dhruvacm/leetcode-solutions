class Solution(object):
    def subsets(self, nums):
        cur=[]
        res=[]
        self.bt(0,nums,cur,res)
        return res
    def bt(self,st,nums,cur,res):
        if st==len(nums):
            res.append(list(cur))
            return
        cur.append(nums[st])
        self.bt(st+1,nums,cur,res)
        cur.pop()
        self.bt(st+1,nums,cur,res)            