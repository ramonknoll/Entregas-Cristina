password = "python"
senha = input("Senha: ")
tentativa = 1
acesso = False

while acesso == False and tentativa <= 3:

    if senha == password:
        print("Acesso liberado!\n")
        acesso = True

    else :
        tentativa += 1
        if tentativa <= 3:
            senha = input("Senha incorreta. Tente novamente: ")

if not acesso:
    print("Acesso negado.\n")