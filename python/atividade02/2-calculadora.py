print("\n===CALCULADORA PYTHON===")
n1 = float(input("Digite o primeiro número: "))
n2 = float(input("Digite o segundo número: "))
op = int(input("Escolha a operação: " \
"\n1 - Adição" \
"\n2 - Subtração" \
"\n3 - Multiplicação" \
"\n4 -Divisão: "))

if op == 1:
    result = n1+n2
    print(f"\nResultado: {result}")
elif op == 2:
    result = n1-n2
    print(f"\nResultado: {result}")
elif op == 3:
    result = n1*n2
    print(f"\nResultado: {result}")
elif op == 4:
    if n2<=0:
        print("Não é possível dividir por 0. Reinicie o programa.")
    else:
        result = n1/n2
        print(f"\nResultado: {result}")
else:
    print("Opção inválida. Reinicie o programa.")