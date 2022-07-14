package main

import (
	"fmt"
	"time"
)

var ConcurrencyLevel = 3

//Making Request Function
func makeRequest(reqnumbers int) {
	time.Sleep(1 * time.Second)
	fmt.Println("Making Request to Remote Address ", reqnumbers)
}

func main() {
	//Making Channel
	queue := make(chan bool, ConcurrencyLevel)
	data := []int{1, 2, 3, 7, 8, 9, 10}
	for _, _idx := range data {
		queue <- true
		go func(idx int) {
			defer func() {
				<-queue
			}()
			makeRequest(idx)
		}(_idx)
	}
}
