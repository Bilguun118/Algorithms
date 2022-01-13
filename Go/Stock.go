package Go

func buy_sell_stock(prices []int) int {
	var result, temporary int
	for idx := 1; idx < len(prices); idx++ {
		temporary += prices[idx] - prices[idx-1]
		if temporary < 0 {
			temporary = 0
		}
		if result < temporary {
			result = temporary
		}
	}
	return result
}

//Call buy_sell_stock Function in Main Function in Golang
