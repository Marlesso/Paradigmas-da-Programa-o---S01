class ArmaCorpoaCorpo:
    def __init__(self, nome : str):
        self.nome = nome

    def __str__(self):
        return self.nome
class PhantomThieves:
    def __init__(self, nome : str, arma : str):
        self.nome = nome
        self.arma = arma

    def __str__(self):
        return f"{self.nome} usa {self.arma}"
class Joker:
    def __init__(self, equipe : list[PhantomThieves]):
        self.arma = ArmaCorpoaCorpo("Espada")
        self.equipe = equipe

    def mostrar_equipe(self):
        for membro in self.equipe:
            print(f" - {membro};\n")

if  __name__ == "__main__":
    morgana = PhantomThieves("Morgana", "Estilingue")
    ryuji = PhantomThieves("Ryuji", "Tacape")
    ann = PhantomThieves("Ann", "Chicote")

    # Passando lista para o Joker
    joker = Joker([morgana, ryuji, ann])

    joker.mostrar_equipe()
