package main

import "fmt"

//Function to find index of target
func findingtwosum(values []int, target int) []int {
	// int Төрөлтэй Hasmap үүсгэх
	//Init HashMap with int data type
	store := make(map[int]int)
	//Looping through values array checking if(Hashmap has target - element) value
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
	//Test Cases
	numbers := []int{1, 2, 3, 4, 5, 6, 7, 8, 9}
	fmt.Println("Enter target to find from an array: ")
	fmt.Scanln(&target)
	fmt.Println("Index of matches: ")
	fmt.Println(findingtwosum(numbers, target))

}
