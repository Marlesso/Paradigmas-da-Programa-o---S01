package main

import "fmt"

func fibonacci(n int) {
	a, b := 0, 1
	for i := 0; i < n; i++ {
		fmt.Print(a, " ")
		a, b = b, a+b
	}
}

func main() {
	fmt.Println("Quantos números da sequência de Fibonnaci você quer?: ")
	
	var q int
	fmt.Scanln(&q)

	fibonacci(q)
}
