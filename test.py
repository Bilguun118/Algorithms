def minimize_weight_difference(stones, M):
    total_weight = sum(stones)
    N = len(stones)
    
    # Initialize the DP array
    dp = [[float('inf')] * (M + 1) for _ in range(N + 1)]
    dp[0][0] = 0
    
    for i in range(1, N + 1):
        for j in range(1, M + 1):
            for k in range(i):
                dp[i][j] = min(dp[i][j], max(dp[k][j - 1], sum(stones[k:i])))
    
    return dp[N][M]

# Example usage:
# stones = [1, 2, 3, 4, 5]
# M = 3
# min_diff = minimize_weight_difference(stones, M)
# print("Minimum difference:", min_diff)
def test(a):
    if a <= 0:
        return
    print(a)
    test(a-1)
    test(a-1)
    
print(test(3))