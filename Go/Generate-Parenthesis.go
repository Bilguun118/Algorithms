package Go

func generateParenthesis(n int) []string {
	if n == 0 {
		return []string{}
	}
	var result []string
	GeneratingParenthesis(n, n, "", &result)
	return result
}

func GeneratingParenthesis(leftidx, rightidx int, str string, result *[]string) {
	if leftidx == 0 && rightidx == 0 {
		*result = append(*result, str)
		return
	}
	if leftidx > 0 {
		GeneratingParenthesis(leftidx-1, rightidx, str+"(", result)
	}
	if rightidx > 0 && leftidx < rightidx {
		GeneratingParenthesis(leftidx, rightidx-1, str+")", result)
	}
}
