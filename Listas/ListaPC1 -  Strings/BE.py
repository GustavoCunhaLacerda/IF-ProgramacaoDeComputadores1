n, k = input().split()
n = int(n)
k = int(k)
texto = 'maconha'

# for i in range(n):
#     textaux = input()
#     texto.append(textaux)

for i in range(len(texto)):
    texto[i] = chr(ord(texto[i])+1)

print(texto)