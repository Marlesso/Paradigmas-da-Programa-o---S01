use std::io;

fn imprimir_tabuada(numero: i32, limite_inferior: i32, limite_superior: i32) {
  for i in limite_inferior..=limite_superior {
    println!("{} x {} = {}", numero, i, numero * i);
  }
}

fn main() {
  let mut numero = String::new();
  let mut limite_inferior = String::new();
  let mut limite_superior = String::new();

  println!("Digite o número para a tabuada:");
  io::stdin()
    .read_line(&mut numero)
    .expect("Falha ao ler o número");
  
  println!("Digite o limite inferior:");
  io::stdin()
    .read_line(&mut limite_inferior)
    .expect("Falha ao ler o limite inferior");
  
  println!("Digite o limite superior:");
  io::stdin()
    .read_line(&mut limite_superior)
    .expect("Falha ao ler o limite superior");

  let num: i32 = numero.trim().parse().expect("Por favor, digite um número válido");
  let li: i32 = limite_inferior.trim().parse().expect("Por favor, digite um número válido");
  let ls: i32 = limite_superior.trim().parse().expect("Por favor, digite um número válido");

  imprimir_tabuada(num, li, ls);
}
