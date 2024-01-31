class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        temperatures.reverse()
        stack=[]
        ans=[]
        
        for index, x in enumerate(temperatures):
            while len(stack)>0 and stack[-1][0]<=x:
                stack.pop()
            if len(stack) ==0:
                ans.append(0)
            else:
                ans.append(index-stack[-1][1])
            stack.append((x,index))
        ans.reverse()
        return ans