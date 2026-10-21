import random

segredo = random.randint(1,10)
tent = 0

palp = int(input("\nFaça um palpite: "))

while palp != segredo:
    if palp > segredo:
        palp = int(input("É menor! "))
    elif palp < segredo:
        palp = int(input("É maior! "))
    tent += 1

print(f"\nParabéns, você acertou em {tent} tentativas!")