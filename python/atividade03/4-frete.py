def calcular_frete(quantidade,preco_unitario):
    a = quantidade * preco_unitario

    return a

caixas = int(input("Digite a quantidade de caixas: "))
preco = float(input("Digite o preço de cada caixa: "))

total = calcular_frete(caixas,preco)

if total >= 500:
    print("\nFrete: R$ 0,00.")
else:
    print("\nFrete: R$ 35,00.")

print(f"Total do pedido: R$ {total:.2f}.")