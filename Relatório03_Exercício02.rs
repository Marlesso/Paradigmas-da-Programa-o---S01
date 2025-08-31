use std::io;

fn eh_par(numero: i32) -> bool {
    numero % 2 == 0
}

fn main() {
  let mut i1 = String::new();
  let mut i2 = String::new();

  println!("Jogador 1 digite seu número: ");
  io::stdin()
    .read_line(&mut i1)
    .expect("Falha ao ler a entrada");
  
  println!("Jogador 2 digite seu número: ");
  io::stdin()
    .read_line(&mut i2)
    .expect("Falha ao ler a entrada");
  let num1: i32 = i1.trim().parse().expect("Falha ao converter num1 para numero");
  let num2: i32 = i2.trim().parse().expect("Falha ao converter num2 para numero");

  let soma = eh_par(num1+num2);
  let j1 = eh_par(num1);
  let j2 = eh_par(num2);

  if soma == j1 && soma == j2 {
    println!("Soma: {}", num1+num2);
    println!("Empate");
  } else if soma == j1 {
      println!("Soma: {}", num1+num2);
      println!("Jogador 1 venceu");
  } else {
      println!("Soma: {}", num1+num2);
      println!("Jogador 2 venceu");
  }
}
