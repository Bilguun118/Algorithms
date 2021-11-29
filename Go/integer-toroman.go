package Go

func intToRoman(num int) string {
	//Init Two Dimensional Array
	roman := [][]string{
		{"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
		{"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
		{"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
		{"", "M", "MM", "MMM"},
	}
	//Number to keep track of symbols
	numbersymbol := 0
	//temporary var equal to given input
	temp := num
	//Result Variable
	var result string = ""
	for temp > 0 {
		remain := temp % 10
		result = roman[numbersymbol][remain] + result
		temp /= 10
		numbersymbol++
	}
	return result

}

//Call intToRoman function in main Function
