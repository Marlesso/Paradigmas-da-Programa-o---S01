use std::io;

fn verificar_senha(senha: &str) -> bool {
    senha.len() <= 8 
  && senha.chars().any(|c| c.is_digit(10)) 
  && senha.chars().any(|c| c.is_ascii_uppercase())
}

fn main() {
  let mut tentativa = String::new();
  println!("Digite sua senha: ");
  loop {
    io::stdin()
      .read_line(&mut tentativa)
      .expect("Falha ao ler a entrada");

    if verificar_senha(&tentativa.trim()) {
      println!("Senha válida! Acesso concedido.");
      break;
    } else {
      println!("Senha inválida. Tente novamente.");
    }
  }
}
