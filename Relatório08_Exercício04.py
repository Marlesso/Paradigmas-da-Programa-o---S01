from abc import abstractmethod


class Cibernetico:
    @abstractmethod
    def realizar_hack(self):
        pass
class Implante:
    def __init__(self, custo : int, funcao : str):
        self.custo = custo
        self.funcao = funcao

    def __str__(self):
        return f"implante ({self.funcao}, custo: {self.custo})"
class NetRunner(Cibernetico):
    def __init__(self, nome : str, custo_implante: int, funcao_implante: str):
            self.nome = nome
            self.implante = Implante(custo_implante, funcao_implante)
    def realizar_hack(self):
        print(f"{self.nome} realiza hack usando {self.implante.funcao} (custo: {self.implante.custo})")
class Faccao:
    def __init__(self, membros : list[Cibernetico]):
        self.membros = membros

    def atacar(self):
        for membro in self.membros:
            membro.realizar_hack()

if  __name__ == "__main__":
    runner1 = NetRunner("V", 500, "Sobrecarga Neural")
    runner2 = NetRunner("T-Bug", 800, "Apagar Câmeras")
    runner3 = NetRunner("Alt", 1000, "Controle de Torres")

    faccao = Faccao([runner1, runner2, runner3])
    faccao.atacar()
