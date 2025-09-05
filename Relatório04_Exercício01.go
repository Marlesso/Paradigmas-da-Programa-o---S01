package main

import "fmt"

func classificar_numero(num int) string {
	if num > 0 {
		return "Positivo"
	} else if num < 0 {
		return "Negativo"
	} else {
		return "Zero"
	}
}

func main() {
	fmt.Println("Digite um número para classificá-lo: ")
	
	var input int
	fmt.Scanln(&input)

	fmt.Println("O número ", input, " é ", classificar_numero(input))
}
