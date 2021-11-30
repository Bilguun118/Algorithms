class Solution:
    def isPalindrome(self, x) -> bool:
        rev = str(x)[::-1]
        if('-' in rev):
            return False
        elif(int(rev) == x):
            return True
        else:
            return False
        
        