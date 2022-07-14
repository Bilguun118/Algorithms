package Go

func isValid(s string) bool {
	var stack []rune
	var mapping = map[rune]rune{')': '(', ']': '[', '}': '{'}
	for _, idx := range s {
		if idx == ')' || idx == '}' || idx == ']' {
			var highElem rune
			if len(stack) > 0 {
				highElem = stack[len(stack)-1]
				stack = stack[:len(stack)-1]
			} else {
				highElem = '#'
			}
			if mapping[idx] != highElem {
				return false
			}
		} else {
			stack = append(stack, idx)
		}
	}
	return len(stack) == 0
}
