package main

import "fmt"

func verificarLogin(usuario, senha string) bool {
	if usuario == "senha" && senha == "admin" {
		return true
	}
	return false
}

func main() {
	for true {
		fmt.Println("Digite seu nome de usuario: ")
		var usuario string
		fmt.Scan(&usuario)
		fmt.Println()

		fmt.Println("Digite sua senha: ")
		var senha string
		fmt.Scan(&senha)
		fmt.Println()

		if verificarLogin(usuario, senha) {
			fmt.Println("Login bem-sucedido!")
			break
		} else {
			fmt.Println("Usuário ou senha incorretos. Tente novamente.")
			fmt.Println()
		}
	}
}
