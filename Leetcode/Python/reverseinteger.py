class Solution:    
    def reverse(self, x) -> int:
        ret = str(abs(x))
        ret = ret.strip()
        ret = ret[::-1]
        output = int(ret)
        if(output >= 2**31 -1 or output <= -2**31):
            return 0
        elif(x < 0):
            return -1 * output
        return output    
        