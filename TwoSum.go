package main

import "fmt"

//Function to find index of target
func findingtwosum(values []int, target int) []int {
	// int Төрөлтэй map үүсгэх
	store := make(map[int]int)
	for k, v := range values {
		if idx, ok := store[target-v]; ok {
			return []int{idx, k}
		}
		store[v] = k
	}
	return nil
}

//Main function
func main() {
	var target int
	fmt.Println("Finding target addition particles from given array")
	numbers := []int{1, 2, 3, 4, 5, 6, 7, 8, 9}
	fmt.Println("Enter target to find from an array: ")
	fmt.Scanln(&target)
	fmt.Println("Index of matches: ")
	fmt.Println(findingtwosum(numbers, target))

}
