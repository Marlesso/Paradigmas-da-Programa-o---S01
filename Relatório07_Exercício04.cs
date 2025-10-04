using System;

public class MonstroSombrio {
  public string nome;

  public MonstroSombrio(string nome){
    this.nome = nome;
  }

  public virtual void Mover(){
    Console.WriteLine($"O {nome}(monstro) esta se movendo");
  }
}

public class Zumbi : MonstroSombrio {
  public Zumbi(string nome) : base(nome){}

  public override void Mover(){
    Console.WriteLine($"O {nome}(zumbi) esta se movendo de forma arrastada");
  }
}

public class Espectro : MonstroSombrio {
  public Espectro(string nome) : base(nome){}

  public override void Mover(){
    Console.WriteLine($"O {nome}(espectro) esta se movendo no ar");
  }
}

class Program {
  public static void Main (string[] args) {
    MonstroSombrio[] monstros = new MonstroSombrio[4];

    monstros[0] = new Zumbi("Rentt Faina");
    monstros[1] = new Zumbi("Momonga");
    monstros[2] = new Espectro("SukkalGir");
    monstros[3] = new Espectro("Velha Turbo");

    foreach(MonstroSombrio monstro in monstros){
      monstro.Mover();
    }
  }
}
