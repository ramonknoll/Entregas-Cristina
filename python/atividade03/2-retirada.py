print("===LUVAS===")
docente = input("Nome do docente: ")
retirar = int(input("Quantidade de pares: "))
estoque = 50

while retirar <= 0:
    retirar = int(input("Digite uma quantidade válida: "))

while retirar > estoque:
    retirar = int(input(f"Estoque insuficiente. Disponivel: {estoque}. "))

estoque -= retirar

print(f"Retirada registrada para {docente}. Saldo: {estoque}.")
if estoque < 10:
    print("Avisar o setor de compras.")