num = int(input("Digite um número inteiro: "))

def fatorial(num):
    result = 1
    for i in range(1,num+1):
        result *= i
    return result

result = fatorial(num)

print(f"Resultado fatorial: {result}")