package Go

func myAtoi(s string) int {
	str := []rune(s)
	length := len(s)
	Maxint, Minint := (1<<31)-1, 1<<31
	idx := 0
	result := 0

	for idx < length && str[idx] == ' ' {
		idx++
	}
	track := 1
	if idx < length && (str[idx] == '-' || str[idx] == '+') {
		if str[idx] == '-' {
			track = -1
		}
		idx++
	}
	for idx < length && str[idx] >= '0' && str[idx] <= '9' {
		digits := int(str[idx] - '0')
		if track > 0 && result > (Maxint-digits)/10 || track < 0 && result > ((Minint-digits)/10) {
			if track == 1 {
				return Maxint
			} else {
				return Minint
			}
		}
		result = result*10 + digits
		idx++
	}
	return result * track
}
