def bfs(board, start_row, start_col):
    rows = len(board)
    cols = len(board[0])    
    
    visited = [[False] * cols for _ in range(rows)]
    # print(visited)
    queue = [(start_row, start_col)]

    while queue:
        row, col = queue.pop(0)
        visited[row][col] = True
        directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]
        print(board[row][col])
        
        for dr, dc in directions:
            new_row, new_col = row+dr, col+dc

            if 0 <= new_row < rows and 0 <= new_col < cols and not visited[new_row][new_col]:
                queue.append((new_row, new_col))
                visited[new_row][new_col] = True


def traverse(board, word, row, col, index, n, m):
    
    if index == len(word):
        return True

    if row <= 0 or col <= 0 or row == m or col == n or board[row][col] != word[index] or board[row][col] == '!':
        print('get here')
        return False
    
    c = board[row][col]
    board[row][col] = '!'

    top = traverse(board, word, row - 1, col, index+1, n, m)
    right = traverse(board, word, row, col+1, index+1, n, m)
    bottom = traverse(board, word, row+1, col, index+1, n, m)
    left = traverse(board, word, row, col-1, index+1, n, m)

    board[row][col] = c
    print(board[row][col])

    return top or right or bottom or left

def exist(board, word):
    m = len(board)
    n = len(board[0])
    index = 0
    print(m,n)
    for i in range(m):
        for j in range(n):
            if board[i][j] == word[index]:
                if traverse(board, word, i, j, index, m, n):
                    return True

    return False


def get_subsets(nums, indx, subst):
    if indx == len(nums)-1:
        subst.append([])
        subst.append([nums[indx]])
    else:
        get_subsets(nums, indx+1, subst)
        n = len(subst)
        
        for i in range(n):
            temp = subst[i]
            temp.append(nums[indx])
            subst.append(temp)
    print(subst)


if __name__=="__main__":
    board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]
    word = "ABCCED"
    nums = [1,2,2]
    get_subsets(nums, 0, [[]])
    ans = exist(board, word)
    print(ans)