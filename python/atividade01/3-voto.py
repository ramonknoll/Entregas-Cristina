idade=int(input("Digite a sua idade: "))

if idade==16 or idade==17 or idade>=70:
    print("Voto opcional.") 
elif idade<16:
    print("Ainda não vota.")
elif idade>=18 or idade<=69:
    print("Voto obrigatório.")