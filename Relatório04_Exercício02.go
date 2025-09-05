package main

import "fmt"

func main() {
	fmt.Println("Digite um número inteiro: ")
	
	var num int
	fmt.Scanln(&num)

	switch num % 2 {
		case 0:
			fmt.Println("O número é par")
		default:
			fmt.Println("O número é ímpar")
	}
}
