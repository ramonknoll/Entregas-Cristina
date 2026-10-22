import sys

estoque = 120
total_retirada = 0
maior_retirada = 0

retiradas = int(input("Quantas retiradas foram feitas hoje? "))

for i in range (1,retiradas+1):
    valor = int(input(f"Retirada {i}: "))
    total_retirada += valor

    if valor > maior_retirada:
        maior_retirada = valor

if total_retirada > estoque:
    print("Retirada não registrada, valor maior do que o estoque.")
    sys.exit()
else: 
    estoque -= total_retirada
    print("\nRetirada registrada.")
    print(f"Total retirado: {total_retirada}.")
    print(f"Maior retirada: {maior_retirada}.")
    print(f"Estoque {estoque} discos.\n")