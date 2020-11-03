x = []
grau = int(input())
ai = list(map(float, input().split())) 
q = int(input())
for i in range(0, q):
    x.append(float(input()))
for i in x:
    soma = 0.0
    for j in range(grau+1):
        pot = 1.0
        for k in range(0, j):
            pot *= i

        soma+=pot*ai[j]
    print(soma)
