# Recurrent approach

def getMinClimb(n):
    getMinClimb(n - 1)
    return


def getMinUsingIterative(cost):
    n = len(cost)
    dp = [0] * n
    dp[0] = cost[0]
    dp[1] = cost[1] 
    for i in range(2, n):
        print('MINUS ONE: ',dp[i-1], i-1)
        print('MINUS TWO: ', dp[i-2], i-2)
        dp[i] = cost[i] + min(dp[i-1], dp[i-2])
        print(dp)
    return min(dp[n-1], dp[n-2])



def houseRobber(nums):
    rob_1, rob_2 = 0, 0
    for i in nums:
        temp = max(rob_1, rob_2 + i)
        rob_2 = rob_1
        rob_1 = temp
    return rob_1

def ClimbingStairs(n):
    dp = [0] * n+1
    for i in range(2, n):
        dp[i] = dp[i - 1]  + dp[i - 2]
    return dp[n]

if __name__=='__main__':
    a = [1,2,3,1]
    print(houseRobber(a))
    print(ClimbingStairs(3)) 