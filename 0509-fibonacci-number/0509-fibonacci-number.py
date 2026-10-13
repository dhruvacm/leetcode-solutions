class Solution(object):
    def fib(self, n):
        if n is 0:
            return 0
        if n is 1:
            return 1
        return self.fib(n-1)+self.fib(n-2)    
        