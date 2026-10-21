quant = 0
num = int(input("Mostrar todos os pares até: "))

for i in range(num):
    if (i+1)%2 == 0:
        print(i+1)
        quant += 1

print(f"\nA quantidade de números pares foi de: {quant}.")