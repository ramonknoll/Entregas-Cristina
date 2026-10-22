pedida = int(input("Digite a quantidade pedida: "))
recebida = int(input("Digite a quantidade recebida: "))

if recebida == pedida:
    print("\nEntrega realizada.\n")
elif recebida < pedida:
    print(f"\nFaltaram {pedida - recebida} unidades, avisar fornecedor.\n")
else:
    print(f"\nSobraram {recebida - pedida} unidades, avisar fornecedor.\n")